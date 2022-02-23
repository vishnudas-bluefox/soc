
import java.net.*;

import java.io.*;

public class tclient

{

public static void main(String args[]) throws IOException

{

Socket s=new Socket("localhost",2000);

PrintWriter pr=new PrintWriter(s.getOutputStream());

InputStreamReader in=new InputStreamReader(System.in);

BufferedReader  b=new BufferedReader(in);

InputStreamReader ino=new InputStreamReader(s.getInputStream());

BufferedReader bf=new BufferedReader(ino);

while(true){

String stt=b.readLine();

pr.println(stt);

pr.flush();

String str=bf.readLine();

System.out.println("server:"+str);

}

}

}
