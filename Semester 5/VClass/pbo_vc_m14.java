class Pegawai {  // superclass
	float gaji = 4000000;  
}  

class Dosen extends Pegawai{   // subclass
	float tunjangan = 1500000;  

	public static void main(String args[]){  
		Dosen d = new Dosen();  
		System.out.println("Gaji dosen : " + d.gaji);  
		System.out.println("Tunjangan dosen : " + d.tunjangan);  
	}
}  
