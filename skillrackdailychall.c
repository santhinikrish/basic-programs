/*input : 1232132131
output : yes
only three numbers should be repeated or occured in the input*/

import java.util.*;
public class Hello {

    public static void main(String[] args) {
		//Your Code Here
        Scanner sc=new Scanner(System.in);
        String str=sc.next();
        int count=0;
        for(int i=0;i<str.length();i++){
            if(i==str.length()-1){
                if(str.charAt(i)=='A'){
                    break;
                }
            }
            if(str.charAt(i)=='A'){
                continue;
            }
            count++;
            for(int j=i+1;j<str.length();j++){
                if(str.charAt(i)==str.charAt(j)){
                    str=str.replace(str.charAt(j),'A');
                }
            }
        }
        if(count==3){
            System.out.print("yes");
        }else{
            System.out.print("no");
        }
	}
}
