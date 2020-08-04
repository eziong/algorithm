//black jack
import java.util.*;

public class b2798 {
    public static void main(String args[]) {
        Scanner scan = new Scanner(System.in);
        int N = scan.nextInt();
        int M = scan.nextInt();
        int N_list[] = new int[N];
        for(int i = 0;i<N;i++){
            N_list[i]=scan.nextInt();
        }
        System.out.println(blackjack(N_list, M));

    }
    static int blackjack(int[] N_list,int M){
        QuickSort(N_list, 0, N_list.length-1);
        int ret = 0;
        for(int i=0;i<N_list.length-2;i++){
            for(int j = i+1;j<N_list.length-1;j++){
                for(int k = j+1;k<N_list.length;k++){
                    int t = N_list[i]+N_list[j]+N_list[k];
                    if(t<=M){
                        if(t>ret){
                            ret = t;
                        }
                    }
                }
            }
        }
        return ret;
    }
    static void QuickSort(int[] arr, int left,int right){
        if (left > right){
            return;
        }
        int l = left;
        int r = right;
        int mid = (left + right) / 2;
        int pivot = arr[mid];
        while(l<=r){
            while(arr[l]<pivot){
                l++;
            }
            while(pivot<arr[r]){
                r--;
            }
            if(l<=r){
                int tmp = arr[l];
                arr[l] = arr[r];
                arr[r] = tmp;
                l++;
                r--;
            }
        }
        QuickSort(arr, left, r);
        QuickSort(arr, l, right);
    }
}