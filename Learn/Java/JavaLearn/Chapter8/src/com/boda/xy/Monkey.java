package com.boda.xy;

import java.util.Objects;

/**
 * 使用Object类的clone()方法可以克隆一个对象，即<strong>创建对象的一个副本</strong>。要使类的对象能够克隆，类必须实现Cloneable接口。
 * */
public class Monkey implements Cloneable {
    private int id;
    private String name;
    private int age;

    public Monkey(int id, String name, int age) {
        this.id = id;
        this.name = name;
        this.age = age;
    }

    public int getId() {
        return id;
    }

//    public String getName() {
//        return name;
//    }

    public int getAge() {
        return age;
    }

    public boolean equals(Object o) {
        return this.id == ((Monkey)o).id;
    }

    @Override
    public String toString() {
        return "Monkey{" +
                "id=" + id +
                ", name='" + name + '\'' +
                ", age=" + age +
                '}';
    }

    public static void main(String[] args) throws CloneNotSupportedException {
        Monkey mon = new Monkey(1,"金丝猴",2);
        Monkey mon2 = (Monkey) mon.clone();
        System.out.println(mon == mon2);
        System.out.println(mon.equals(mon2));
        System.out.println(mon.getClass().getName());
        System.out.println(Integer.toHexString(mon.hashCode()));
        System.out.println(mon);
    }
}
