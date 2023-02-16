import java.util.Scanner;
public class marioless{

    public static void main (String [] args){
        /** Demander la hauteur et retourne un entier */
        Scanner hauteur = new Scanner(System.in);
        System.out.println("Quel est la hauteur:");
        int h = hauteur.nextInt();

        /** Créer une boucle qui produit un nombre de # pour la hauteur donnée */

        for(int i=0;i < h; i++){
            for(int j = 0; j < h; j++){
                if(i+j < h - 1){
                    System.out.print(".");
                }
                else if (j == h-1){
                    System.out.println("#");
                }
                else {
                    System.out.print("#");
                }
        }
    }
}
}