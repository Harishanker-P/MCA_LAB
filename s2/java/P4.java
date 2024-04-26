import java.util.Scanner;

class P4 {

    static int[][] read(int row, int col) {
        Scanner sc = new Scanner(System.in);
        int mat[][] = new int[row][col];
        System.out.println("enter the matrix");
        for (int i = 0; i < row; i++) {
            for (int j = 0; j < col; j++) {
                mat[i][j] = sc.nextInt();
            }
        }
        return mat;
    }

    static void display(int mat[][]) {
        System.out.println("the matrix is:");
        for (int i = 0; i < mat.length; i++) {
            for (int j = 0; j < mat[0].length; j++) {
                System.out.print(mat[i][j] + " ");
            }
            System.out.println("");
        }
    }

    static int[][] add(int mat1[][], int mat2[][]) {
        int res[][] = new int[mat1.length][mat1[0].length];
        for (int i = 0; i < mat1.length; i++) {
            for (int j = 0; j < mat1[0].length; j++) {
                res[i][j] = mat1[i][j] + mat2[i][j];
            }
        }
        return res;
    }

    public static void main(String arg[]) {

        int row=2,col=2;
        int[][] a = read(row,col);
        int [][] b=read(row,col);
        display(a);
        display(b);
        System.out.println("The sum of matrix is");
        display(add(a,b));


    }

}
