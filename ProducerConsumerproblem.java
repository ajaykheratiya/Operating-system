import java.util.Scanner;
import java.util.ArrayList;

public class ProducerConsumerproblem {

    public static void main(String[] args) {
      ArrayList<Integer>buffer=new ArrayList<Integer>();
        Thread t1=new Thread(new Producer(buffer));
       Thread t2=new Thread(new Consumer(buffer));
        t1.start();
        t2.start();
        
       
    }
    
}
class Producer implements Runnable
{
    ArrayList<Integer>b=null;
    final int limit=10;
    int i=0;
    Producer(ArrayList<Integer>buffer)
    {
        b=buffer;
        
    }
    public void run()
    {
        while(true)
        {
            try
            {
                i++;
                produce(i);
                
            }
            catch(Exception e)
            {
                System.out.println(e);
            }
        }
    }

public void produce (int i) throws InterruptedException
{
 synchronized(b)
{
while(b.size()==limit){
System.out.println("producer is waiting for consumer...");
b.wait();
}
}
synchronized(b)
{
b.add(i);
System.out.println("Added Item"+i);
Thread.sleep(100);
b.notify();
}
}
}
class Consumer implements Runnable
{
    ArrayList<Integer>b=null;
    Consumer(ArrayList<Integer>buffer)
    {
        b=buffer;
    }
    public void run()
    {
        while(true)
        {
            try
            {
                
                consume();
                
            }
            catch(Exception e)
            {
         
            }
        }
    }
    public void consume( ) throws InterruptedException
{
 synchronized(b)
{
while(b.isEmpty()){
System.out.println("buffer is empty");
b.wait();
}
}
synchronized(b)
{
b.remove(0);
System.out.println("remove Item"+b);
Thread.sleep(100);
b.notify();
}
}}
