import java.util.Scanner;

public class Test_Two {
    public static class Stu {
        int num;
        String name = new String();
        String sex = new String();
        int score;

        // 向对象赋值
        public Stu(int num, String name, String sex, int score) {
            this.num = num;
            this.name = name;
            this.sex = sex;
            this.score = score;
        }

        @Override
        public String toString() {
            return "Stu [num=" + num + ", name=" + name + ", sex=" + sex + ", score=" + score + "]";
        }
    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        Stu[] info = new Stu[4];
        for (int i = 0; i < 4; i++) {
            // 向对象里面输入属性
            info[i] = new Stu(sc.nextInt(), sc.next(), sc.next(), sc.nextInt());
        }
        sc.close();
        int point = 0, max = info[0].score;
        for (int i = 1; i < 4; i++) {
            if (max < info[i].score) {
                point = i;
                max = info[i].score;
            }
        }
        System.out.println(info[point]);
    }
}
