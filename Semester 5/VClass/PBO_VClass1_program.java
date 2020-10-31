// Elmo Allistair
// 12118220
// 3KA17
      	
import java.util.Arrays;
import java.util.Scanner;

class PBO_Vclass_1 {
    
    static void soal_1() {
        Scanner input = new Scanner(System.in);
        
        System.out.print("Input nama            : ");
        String nama = input.nextLine();
        System.out.print("Input nilai UTS       : ");
        int uts = input.nextInt();
        System.out.print("Input nilai Praktikum : ");
        int praktikum = input.nextInt();
        System.out.print("Input nilai UAS       : ");
        int uas = input.nextInt(); 
        double nilai_akhir = uts*0.3 + praktikum*0.2 + uas*0.5;
        String keterangan;

        if (nilai_akhir >= 60)
            keterangan = "Anda LULUS!";
        else
            keterangan = "Anda TIDAK LULUS!";

        System.out.println("\nLaporan Mahasiswa");
        System.out.println("Nama                  : " + nama);
        System.out.println("Nilai UTS             : " + uts);
        System.out.println("Nilai Praktikum       : " + praktikum);
        System.out.println("Nilai UAS             : " + uas);
        System.out.println("Nilai Nilai akhir     : " + nilai_akhir);
        System.out.println("Keterangan            : " + keterangan);
    }

    static void soal_2() {
        Scanner input = new Scanner(System.in);
		
        System.out.print("Input bilangan (minimal tiga): ");
        String[] inputBilangan = input.nextLine().split("\\s+");	 
        int[] bilangan = new int [inputBilangan.length];
        
        for (int i=0; i < inputBilangan.length; i++) {
            bilangan[i] = Integer.parseInt(inputBilangan[i]);
        }
		
        int max = bilangan[0];
		for(int i = 1; i < bilangan.length;i++) {
			if(bilangan[i] > max) {
				max = bilangan[i];
			}
		}

        System.out.println("\nBilangan terbesar: " + max);
    }
    
    static void soal_3() {
        double total = 0;
        double cicilan = 0;
        Scanner input = new Scanner(System.in);
        
        System.out.print("Input harga apartement   : ");
        int harga_apart = input.nextInt();
		System.out.println("Jenis pembayaran");
		System.out.println("1) Tunai Langusung");
		System.out.println("2) Tunai Bertahap  ( 6 Bulan)");
		System.out.println("3) Kredit Menengah (12 Bulan)");
		System.out.println("4) Kredit Menengah (24 Bulan)");
		System.out.println("5) Kredit Panjang  (60 Bulan)");
		System.out.print("Input jenis pembayaran (1-5): ");
        int jenis_pembayaran = input.nextInt();
        switch(jenis_pembayaran) {
            case 1:
                total = harga_apart - harga_apart * 0.1;
                cicilan = 0;
                break;
            case 2:
                total = harga_apart - harga_apart * 0.05;
                cicilan = total/6;            
                break;
            case 3:
                total = harga_apart;
                cicilan = total/12;
                break;
            case 4:
                total = harga_apart + harga_apart *  0.1;
                cicilan = total/24;
                break;
            case 5:
                total = harga_apart + harga_apart * 0.25;
                cicilan = total/60;
                break;
            default:
                System.out.print("\nERROR: Input anda salah");
                System.exit(0);
        }

        System.out.printf("\nTotal Harga apartemen = Rp. %.2f", total);
        System.out.printf("\nCicilan per bulan     = Rp. %.2f", cicilan);
    }

    public static void main(String[] args) {
        System.out.println("\n---  No. 1 ---"); 
        soal_1();

        System.out.println("\n---  No. 2 ---"); 
        soal_2();
        
        System.out.println("\n---  No. 3 ---"); 
        soal_3();
    }
}
