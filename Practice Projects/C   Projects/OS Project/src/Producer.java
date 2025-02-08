public class Producer implements Runnable {

    private Buffer buffer;
    public Producer(Buffer b) {
        buffer = b;
    }
    public void run() {
        try {
            for (int i = 1; i < 11; i++) // Generate 10 jobs
            {
                buffer.set("Job " + i);
                System.out.println("Producer produced Job " + i);
                Thread.sleep(500);
            }
        } catch (InterruptedException e) {
            e.printStackTrace();
        }
    }
}

