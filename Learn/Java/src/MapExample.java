package src;

import java.util.ArrayList;
import java.util.HashMap;
import java.util.Map;
import java.util.TreeMap;

public class MapExample {
    public static void main(String[] args) {
        // 创建一个HashMap
        Map<Integer, ArrayList<Integer>> hashMap = new HashMap<>();
        hashMap.put(3, new ArrayList<>());
        hashMap.put(1, new ArrayList<>());
        hashMap.put(2, new ArrayList<>());
        System.out.println("HashMap: " + hashMap);

        // 创建一个TreeMap
        Map<Integer, ArrayList<Integer>> treeMap = new TreeMap<>();
        treeMap.put(3, new ArrayList<>());
        treeMap.put(1, new ArrayList<>());
        treeMap.put(2, new ArrayList<>());
        System.out.println("TreeMap: " + treeMap);
    }
}