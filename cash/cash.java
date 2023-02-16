import java.util.Scanner;
public class cash{

    public static void main(String [] args){

        /* Demande l'argent que possède le client */
        int cents = howmanyCents();

        /* calculer le nombre de quarters */
        int quarters = calculateQuarters(cents);
        cents = cents - quarters * 25;

        int dimes = calculateDimes(cents);
        cents = cents - dimes * 10;

        int nickel = calculateNickel(cents);
        cents = cents - nickel * 5;

        int penny = calculatePenny(cents);
        cents = cents - penny * 1;

        System.out.println("tu as " + quarters + "quarters en poche");
        System.out.println("tu as " + dimes + "dimes en poche");
        System.out.println("tu as " + nickel + "nickel en poche");
        System.out.println("tu as " + penny + "penny en poche");
        System.out.println(cents);
    }

    private static int howmanyCents(){
        Scanner argent = new Scanner(System.in);
        System.out.println("Combien as-tu d'argent ?:");
        int cents = argent.nextInt();
        return cents;
    }

    private static int calculateQuarters(int cents){
        int quarters = 0;
        while (cents >= 25){
            cents = cents - 25;
            quarters++;
        }
        return quarters;
    }

    private static int calculateDimes(int cents){
        int dimes = 0;
        while (cents >= 10){
            cents = cents - 10;
            dimes++;
        }
        return dimes;
    }
    private static int calculateNickel(int cents){
        int nickel = 0;
        while (cents >= 5){
            cents = cents - 5;
            nickel++;
        }
        return nickel;
    }
    private static int calculatePenny(int cents){
        int penny = 0;
        while (cents >= 1){
            cents = cents - 1;
            penny++;
        }
        return penny;
    }

}