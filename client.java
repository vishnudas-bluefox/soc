
import java.net.*;

import java.io.*;

public class client{

public static void main(String arg[]) throws IOException {

Socket s=new Socket("localhost",5000);

PrintWriter out=new PrintWriter(s.getOutputStream(),true);

BufferedReader in=new BufferedReader(new InputStreamReader(s.getInputStream()));

BufferedReader kln=new BufferedReader(new InputStreamReader(System.in));

while(true)

{

String userInput=kln.readLine();

out.println(userInput);

System.out.println("server says:"+in.readLine());

}

}

}
