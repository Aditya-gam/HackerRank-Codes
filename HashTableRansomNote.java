import java.util.*;

class RansomNote {

    // Complete the checkMagazine function below.
    static void checkMagazine(String[] magazine, String[] note) {
        Map<String, Integer> magazineOccurences = new HashMap<String, Integer>();
        Map<String, Integer> ransom = new HashMap<String, Integer>();

        for(String str: magazine){
            if (!magazineOccurences.containsKey(str)) magazineOccurences.put(str, 0);
            magazineOccurences.put(str, magazineOccurences.get(str) + 1);
        }

        for(String str: note){
            if (!ransom.containsKey(str)) ransom.put(str, 0);
            ransom.put(str, ransom.get(str) + 1);
        }

        for(String key: ransom.keySet()){
            if (!magazineOccurences.containsKey(key)) {
                System.out.println("No");
                return;
            };
            int needed = ransom.get(key);
            if (magazineOccurences.get(key) < needed) {
                System.out.println("No");
                return;
            };
        }
        
        System.out.println("Yes");
    }

    private static final Scanner scanner = new Scanner(System.in);

    public static void main(String[] args) {
        System.out.println("Enter The Line: ");
        String[] mn = scanner.nextLine().split(" ");

        int m = Integer.parseInt(mn[0]);

        int n = Integer.parseInt(mn[1]);

        String[] magazine = new String[m];

        String[] magazineItems = scanner.nextLine().split(" ");
        scanner.skip("(\r\n|[\n\r\u2028\u2029\u0085])?");

        for (int i = 0; i < m; i++) {
            String magazineItem = magazineItems[i];
            magazine[i] = magazineItem;
        }

        String[] note = new String[n];

        String[] noteItems = scanner.nextLine().split(" ");
        scanner.skip("(\r\n|[\n\r\u2028\u2029\u0085])?");

        for (int i = 0; i < n; i++) {
            String noteItem = noteItems[i];
            note[i] = noteItem;
        }

        checkMagazine(magazine, note);

        scanner.close();
    }
}
