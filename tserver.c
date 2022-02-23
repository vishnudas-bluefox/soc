import java.io.*;

import java.net.*;

public class tserver

{

public static void main(String args[]) throws IOException

{

ServerSocket ss=new ServerSocket(2000);

Socket s=ss.accept();

System.out.println("client Connected");

InputStreamReader in=new InputStreamReader(s.getInputStream());

BufferedReader bf=new BufferedReader(in);

InputStreamReader inOO=new InputStreamReader(System.in);

BufferedReader  b=new BufferedReader(inOO);

PrintWriter pr=new PrintWriter(s.getOutputStream());

while(true){

String str=bf.readLine();

System.out.println("Client:"+str);

String stt=b.readLine();

pr.println(stt);

pr.flush();

}

}

}
