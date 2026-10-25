class Solution {
    public List<List<String>> groupAnagrams(String[] strs) {
        Map<String,List<String>> mp=new HashMap<>();
        for(String s:strs){
            char[] ss=s.toCharArray();
            Arrays.sort(ss);
            String sss=new String(ss);
            mp.putIfAbsent(sss,new ArrayList<>());
            mp.get(sss).add(s);
        }
        return new ArrayList<>(mp.values());
    }
}
