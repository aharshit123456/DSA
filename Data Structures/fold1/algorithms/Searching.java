import java.util.Arrays;

public class Searching{
 public static void main(String args[]) {

        // System.out.println("Hello World");

        /*
         * * int[] array = { 9, 1, 8, 2, 7, 3, 6, 4, 5 
         * * int index = LinearSearch(array, 7);
         * 
         * * if (index != -1)
         * * System.out.println("Element found at index: " + index
         * * } else
         * * System.out.println("Element not found."
         * *
         * 
         */

        int array[] = new int[100];
        int target = 42;

        // int[] array = {1,2,4,8,16,32,64,128,512,1024};

        for (int i = 0; i < array.length; i++) {
            array[i] = i;
        }

        //int index = Arrays.binarySearch(array, target);
        /*int index = BinarySearch(array, target);

        if (index != -1) {
            System.out.println("Element found at index: " + index);
        }else {
            System.out.println("Element not found.");
        }
        */


        int index = InterpolationSearch(array, 64);
        if (index != -1) {
            System.out.println("Element found at index: " + index);
        }else {
            System.out.println("Element not found.");
        }
    }

    private static int InterpolationSearch(int[] array, int value) {

        /*
         * Best for uniformly distributed dataset
         * 
         */
        
        int low = 0;
        int high = array.length - 1;

        while (value >= array[low] && value <= array[high] && low <= high) {
            int probe = low + (high - low) * (value - array[low])/(array[high] - array[low]);

            System.out.println("probe: " + probe);
            if(array[probe] == value) return probe;
            else if (array[probe] < value) low = probe + 1;
            else high = probe - 1; 

        }
    return -1;
}

    private static int BinarySearch(int[] array, int target) {
        
        int low = 0;
        int high = array.length - 1;

        while(low <= high){
            int middle = low + (high-low)/2 ;
            int value = array[middle];

            System.out.println("Middle: "+ value);
            if(value < target)
                low = middle + 1;
            else if(value > target) high = middle -1;
            else return middle;
        }

        return -1;
    }

    private static int LinearSearch(int[] array, int value) {

        for (int i = 0; i < array.length; i++) {
            if (array[i] == value) {
                return i;
            }
        }

        return -1;

    }
}
