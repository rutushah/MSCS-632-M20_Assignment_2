package section2;

public class GarbageCollectorDemo {
    public static void main(String[] args) {
        int[] data = new int[5_000_000]; //allocating the 20MB heap memory space

        useData(data);
        data = null;

        System.out.println("Reference removed. GC will reclaim later.");
    }

    static void useData(int[] arr){
        System.out.println("Array Length: " + arr.length);
    }
}
