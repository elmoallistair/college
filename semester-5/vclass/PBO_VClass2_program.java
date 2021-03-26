// Elmo Allistair
// 12118220
// 3KA17
      	
import java.util.Arrays;
import java.util.Scanner;

class PBO_Vclass_1 {
    static void soal_1() {
        double start = 1, curr_num=start, sum = 0, temp;
        
        int counter = 0;
        for (int i=1; i <= 100; i++) {
            temp = (i % 2 == 1) ? curr_num : -curr_num;
            System.out.printf ("%.4f ", temp);
            sum += temp;
            counter += 1;
            curr_num = start/(i*2);
        }

        System.out.println("\n\nLength : " + counter);
        System.out.printf ("Sum    : %.4f\n", sum);
    }

    static void soal_2() {
        Scanner input = new Scanner(System.in);
        System.out.print("Input start temp in C : ");
        int C_start = input.nextInt();
        System.out.print("Input stop temp in C  : ");
        int C_stop = input.nextInt();
        double C_curr = C_start, R_curr, F_curr, K_curr;

        System.out.println("|   C   |   R   |   F   |   K    |");
        System.out.println("|--------------------------------|");
        for (int i=C_start; i <= C_stop; i++) {
            R_curr = C_curr * 4/5;
            F_curr = C_curr * 9/5 + 32;
            K_curr = C_curr + 273.15;
            System.out.print("|" + String.format("%6s ", String.valueOf(C_curr)));
            System.out.print("|" + String.format("%6s ", String.valueOf(R_curr)));
            System.out.print("|" + String.format("%6s ", String.valueOf(F_curr)));
            System.out.print("|" + String.format("%7s ", String.valueOf(K_curr)) + "|");
            System.out.print("\n");

            C_curr++;
        }
    }
    
    static void soal_3() {
        Scanner input = new Scanner(System.in);
        double bonus, currSal, totalSal = 0;
        String[] playerName = new String[20];
        double[] playerCurrSal = new double[20];
        double[] playerTotSal = new double[20];

        for (int i=0; i<20; i++) {
            System.out.println("\n--- Player " + (i+1) +  " ---");
            System.out.print("Input player name   : ");
            playerName[i] = input.nextLine();

            System.out.print("Input player salary : ");
            playerCurrSal[i] = input.nextDouble();
            currSal = playerCurrSal[i];
            bonus = (currSal > 20000000) ? 0 : (
                        (currSal > 15000000) ? 0.5 : (
                            (currSal > 10000000) ? 0.1 : 0.2));
            playerTotSal[i] = currSal + currSal * bonus;
            System.out.println("Total player salary : " + playerTotSal[i]);
            input.nextLine();
        }

        double sumCurrSal = Arrays.stream(playerCurrSal).sum();
        double sumTotSal  = Arrays.stream(playerTotSal).sum();
        System.out.println("\nTotal player salary         : " + sumCurrSal);
        System.out.println("Total player salary + bonus : " + sumTotSal);
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
