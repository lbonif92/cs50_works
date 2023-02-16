public class hello{
    public static void main(String[] args){
        if (args.length == 1){
            direBonjour(args[0]);
        }
        else {
            direBonjour("tous");
        }
    }

private static void direBonjour (String prenom){
    System.out.print("Bonjour à " + prenom + "!\n");
}
}