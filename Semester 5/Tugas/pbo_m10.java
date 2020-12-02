import java.io.BufferedReader;
import java.io.BufferedWriter;
import java.io.File;
import java.io.FileNotFoundException;
import java.io.FileReader;
import java.io.FileWriter;
import java.io.IOException;
public class pertemuan10e {
public static void main(String[] args) throws IOException {
String namaFolder="Folder baru";
buatFolder(namaFolder);

String namaFile="belajarjava.txt";
buatFile(namaFolder,namaFile);

String isiFile="tes doank";
isiFile(namaFolder,namaFile,isiFile);

bacaFile(namaFolder,namaFile);

hapusFile(namaFolder,namaFile);
}

public static void buatFolder(String namaFolder){
File file=new File("src/"+namaFolder);
if(!file.exists());{
file.mkdirs();}
}

public static void buatFile(String namaFolder, String namaFile)throws IOException{
try{
File file=new File("src/"+namaFolder+"/"+namaFile);
file.createNewFile();}
catch(IOException x){
System.out.println("salah karena "+x);}}

public static void isiFile(String namaFolder, String namaFile, String isiFile)throws IOException{
File file=new File("src/"+namaFolder+"/"+namaFile);
FileWriter a=new FileWriter(file,true);
BufferedWriter b=new BufferedWriter(a);
b.write(isiFile);
b.close();}

public static void bacaFile(String namaFolder, String namaFile) throws FileNotFoundException, IOException{
BufferedReader bufferedReader=null;
String teksDariFile="";
String barisTeks;
bufferedReader = new BufferedReader(new FileReader("src/"+namaFolder+"/"+namaFile));
while((barisTeks=bufferedReader.readLine())!=null){
teksDariFile=teksDariFile+barisTeks;}
System.out.println("Teks dari file: "+teksDariFile);}

public static void hapusFile(String namaFolder, String namaFile){
File file=new File("src/"+namaFolder+"/"+namaFile);
file.delete();
}
}
