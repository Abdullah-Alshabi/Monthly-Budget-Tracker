import java.util.concurrent.Semaphore;
public class Buffer {
    private String [] buffer;
    private Semaphore mutex, full, empty;
    private final int size;
    private int add, remove;
    Buffer(int s) {
        size = s;
        buffer = new String[size];
        add = remove = 0;
        mutex = new Semaphore(1);
        full = new Semaphore(0);
        empty = new Semaphore(size);
    }
    void set(String job) throws InterruptedException{
        empty.acquire();
        mutex.acquire();
        buffer[add] = job;
        add = (add + 1) % size;
        full.release();
        mutex.release();
    }
    String get() throws InterruptedException{
        full.acquire();
        mutex.acquire();
        String job = buffer[remove];
        remove = (remove + 1) % size;
        empty.release();
        mutex.release();
        return job;
    }
}
