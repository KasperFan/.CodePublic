import java.util.Scanner;

public class person_1752 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();

        //10名新生信息
        Student[] st = new Student[n];
        for (int i = 0; i < n; i++) {
            st[i] = new Student(sc.next(), sc.next(), sc.nextLine(), sc.nextInt(), sc.nextInt());
        }
        for (int i = 0; i < n; i++) {
            if (st[i].grade == 13) {
                System.out.println(st[i]);
            }
        }

        sc.close();
    }
    

    static class Person {
        String name;
        String sex;
        String address;
        
        public Person(String name, String sex, String address) {
            this.name = name;
            this.sex = sex;
            this.address = address;
        }

        @Override
        public String toString() {
            return "Person [name=" + name + "]";
        }
    }

    static class Student extends Person {
        int grade;
        int classroom;
        
        public Student(String name, String sex, String address, int grade, int classroom) {
            super(name, sex, address);
            this.grade = grade;
            this.classroom = classroom;
        }

        @Override
        public String toString() {
            return "Student [name=" + this.name + "]";
        }
    }
    
    static class Employee extends Person {
        int salary;

        public Employee(String name, String sex, String address, int salary) {
            super(name, sex, address);
            this.salary = salary;
        }

        @Override
        public String toString() {
            return "Employee [name=" + this.name + "]";
        }
        
    }

    static class Faculty extends Employee {
        int classTeach;
        int Grade;

        public Faculty(String name, String sex, String address, int salary, int classTeach, int grade) {
            super(name, sex, address, salary);
            this.classTeach = classTeach;
            Grade = grade;
        }

        @Override
        public String toString() {
            return "Faculty [name=" + this.name + "]";
        }
        
    }
    static class Staff extends Employee {
        String Tie;

        public Staff(String name, String sex, String address, int salary, String tie) {
            super(name, sex, address, salary);
            Tie = tie;
        }

        @Override
        public String toString() {
            return "Staff [name=" + this.name + "]";
        }
        
    }
}
