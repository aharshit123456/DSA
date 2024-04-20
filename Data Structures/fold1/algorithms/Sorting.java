public class Sorting {
/*
 * O(n^2) = quadratic time
 *  -> insertion sort
 *  -> selection sort
 *  -> bubble sort
 * O(n log n) = quasilinear time
 *  -> quicksort
 *  -> mergesort
 *  -> heapsort
 * 
 * 
 */


    public static void main(String[] args) {
        int array[] = {9,1,8,2,7,4,6,3,4,5};

        for(int i : array) System.out.print(i + " ");

        /*bubbleSort(array);
        System.err.println("\n");
        for(int i: array) System.out.print(i);*/
        
        // selectionSort(array);
        // System.err.println();
        // for(int i: array) System.out.print(i + " ");

        // insertionSort(array);
        // System.err.println();
        // for(int i: array) System.out.print(i + " ");
       
        mergeSort(array);
        System.err.println();
        for(int i: array) System.out.print(i + " ");
    }

    private static void insertionSort(int[] array) {
        for(int i = 1; i < array.length; i++){
            int temp = array[i];
            int j = i - 1;
            while(j >= 0 && array[j] > temp){
                array[j+1] = array[j];
                j--;
            }
            array[j+1] = temp;
        }
    }

    private static void selectionSort(int[] array) {
        for(int i = 0; i < array.length-1 ; i++){
            int min = i;
            for(int j = i+1; j < array.length-1 ; j++){
                if(array[min] > array[j]){
                    min = j;
                }
            }
            int temp = array[i];
            array[i] = array[min];
            array[min] = temp;
        }
    }

    public static void bubbleSort(int array[]){
        for(int i = 0; i < array.length-1 ; i++){
            for(int j = 0; j < array.length-1 ; j++){
                if(array[j] > array[j+1]){
                    int temp = array[j];
                    array[j] = array[j+1];
                    array[j+1] = temp;
                }
            }
        }
    }
}