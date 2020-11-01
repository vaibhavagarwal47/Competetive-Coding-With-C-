import java.util.*;

public class list{
public static void main(String[] args) {
    ArrayList<Integer> arr = new ArrayList<Integer>();
    for(int i=0;i<10;i++){
        arr.add(i);
    }


    for(int a:arr)
    {
        System.out.println(a);
    }
}

}