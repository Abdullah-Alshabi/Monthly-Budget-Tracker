public class Consumer implements Runnable {
    private Buffer buffer;
    public Consumer(Buffer b) {
        buffer = b;
    }
    public void run() {
        try {
            for (int i = 1; i < 11; i++) {
                String job = buffer.get();
                System.out.println("Consumer consumed " + job);
                Thread.sleep(1000);
            }
        } catch (InterruptedException e) {
            e.printStackTrace();
        }
    }

}
