package os;
import java.util.concurrent.Semaphore;

public class ReaderWriter {
    static int readcount=0;
    static Semaphore S=new Semaphore(1);
    static Semaphore W=new Semaphore(1);
     public static void main(String args[]){
         Reader r=new Reader();
         writer w=new writer();
         Thread t1=new Thread(r);
         t1.setName("r1");
         Thread t2=new Thread(r);
         t2.setName("r2");
         Thread t3=new Thread(w);
         t3.setName("w1");
         t1.start();
         t2.start();
         t3.start();
        }
  static class Reader implements Runnable
  {
      public void run()
      {
        try{
            S.acquire();
            readcount ++;
            if(readcount==1)
            W.acquire();
            S.release();
            System.out.println(Thread.currentThread()  +"start reading");
            Thread.sleep(500);
            System.out.println(Thread.currentThread()  +"end reading");
            S.acquire();
            readcount--;
            if(readcount==0)
            W.release();
            S.release();
            }
        catch(Exception e)
        {
            System.out.println(e);
        }
      }
  }
  static class writer implements Runnable
  {
      public void run()
      {
          try{
             W.acquire();
             System.out.println(Thread.currentThread()  +"start writting");
             Thread.sleep(500);
             System.out.println(Thread.currentThread()+"end writing");
             W.release();
          }
          catch(Exception e)
          {
             System.out.println(e);
          }
      }
  }
     
 }

