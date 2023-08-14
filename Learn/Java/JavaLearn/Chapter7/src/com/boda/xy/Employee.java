package com.boda.xy;

import java.util.Objects;

public class Employee extends Person {
    public int id;
    public double salary;

    /**
     * 无参数构造方法
     */
    public Employee() {
    }

    /**
     * 带1个参数构造方法
     */
    public Employee(double salary) {
        this.salary = salary;
    }

    /**
     * 带3个参数构造方法
     */
    public Employee(String name, int age, double salary) {
        super(name, age);
        this.salary = salary;
    }

    /**
     * 带2个参数构造方法
     *
     * @param name
     * @param age
     */
    public Employee(String name, int age, int id, double salary) {
        super(name, age);
        this.id = id;
        this.salary = salary;
    }

    public static void main(String[] args) {
        var emp = new Employee("刘明", 30, 5000);
        System.out.println("姓名 = " + emp.name);
        System.out.println("年龄 = " + emp.age);
        emp.sayHello();
        System.out.println(emp.computeSalary(10, 50.0));
    }

    public double getSalary() {
        return salary;
    }

    /**
     * 计算并返回员工总工资
     */
    public double computeSalary(int hours, double rate) {
        double totalSalary = this.salary + hours * rate;
        return totalSalary;
    }

    /**
     * instanceof运算符用来测试一个实例是否是某种类型的实例，这里的类型可以是类、抽象类、接口等。instanceof运算符的格式如下：
     * <blockquote><pre>{@code variable instanceof TypeName}</pre></blockquote>
     * 该表达式返回逻辑值。如果variable是TypeName类型或其父类型的实例，返回true，否则返回false
     */
    @Override
    public boolean equals(Object o) {
//        if (this == o) return true;
//        if (o == null || getClass() != o.getClass()) return false;
//        Employee employee = (Employee) o;
//        return id == employee.id && Double.compare(employee.salary, salary) == 0 && name.equals(employee.name);
        if (this == o) return true;
        if (o == null) return false;
        if (!(o instanceof Employee)) return false;

        Employee employee = (Employee) o;
        return getId() == employee.getId() && Objects.equals(getName(), employee.getName()) && getSalary() == employee.salary;
    }


    public int getId() {
        return id;
    }

    @Override
    public int hashCode() {
        return Objects.hash(id, name, salary);
    }
}
