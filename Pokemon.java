public class Pokemon{
    public String name;
    public int level;

    public Pokemon(String name,int level){
        this.name=name;
        this.level=level;
    }

    public static void main(String[] args) {
        Pokemon p = new Pokemon("Pikachu",17);
        int level=100;
        change(p,level);
        System.out.println("name: "+p.name+ ", level: "+p.level);
    }
    public static void change(Pokemon poke,int level){
        poke.level=100;
        level=50;
        poke = new Pokemon("Gengar",1);
        System.out.println("name: "+poke.name+ ", level: "+poke.level);

    }
}


