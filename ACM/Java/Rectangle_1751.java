import java.util.Scanner;

public class Rectangle_1751 {
    public static class Rectangle {
        double width;
        double height;

        public Rectangle() {
        }

        public Rectangle(double width, double height) {
            this.width = width;
            this.height = height;
        }

        public double getArea() {
            return this.width * this.height;
        }

        public double getPerimeter() {
            return 2 * (this.height + this.width);
        }

        public void fold() {
            if (this.width > this.height)
                this.width /= 2;
            else
                this.height /= 2;
        }

        public void fold(String input) {
            if (input == "width") {
                this.width /= 2;
            } else
                this.height /= 2;
        }

        public static void main(String[] args) {
            Scanner sc = new Scanner(System.in);
            Rectangle recA = new Rectangle(sc.nextDouble(), sc.nextDouble());
            Rectangle recB = new Rectangle(sc.nextDouble(), sc.nextDouble());
            int a = sc.nextInt(), b = sc.nextInt();
            sc.close();
            while (a-- > 0)
                recA.fold();
            while (b-- > 0)
                recB.fold();
            System.out.println(recA.getArea()/recB.getArea());
        }
    }
}
