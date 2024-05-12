public class Ververica {
    private String ime;
    private String boja;

    private Raka levaRaka;
    private Raka desnaRaka;

    private String stoDrze;

    public void setIme(String ime) {
        this.ime = ime;
    }

    public void setBoja(String boja) {
        this.boja = boja;
    }

    public Ververica(String ime, String boja) {//konstruktor
        this.setIme(ime);
        this.setBoja(boja);
        this.levaRaka = new Raka();
        this.desnaRaka = new Raka();
        this.stoDrze = "NISTO";
    }

    public String getIme() {
        return ime;
    }

    public String getBoja() {
        return boja;
    }

    public String getStoDrze() {
        return stoDrze;
    }

    public void svijLevaRaka(){
        levaRaka.zberi();
        System.out.println(ime+ ": ja svitkala levata raka");
    }

    public void svijDesnaRaka(){
        desnaRaka.zberi();
        System.out.println(ime+ ": ja svitkala desnata raka");

    }

    private  void proveriDaliMozeDaDrzeNesto(Raka raka){
        if(raka.daIspruzena()){
            System.out.println(ime+ ": go ispusti " + stoDrze);
            stoDrze = "NISTO";
        }
    }
    public void ispruziLevaRaka(){
        levaRaka.ispruzi();
        System.out.println(ime+ ": ja ispruzila levata raka");
    proveriDaliMozeDaDrzeNesto(desnaRaka);

    }

    public void ispruziDesnaRaka(){
        desnaRaka.ispruzi();
        System.out.println(ime+ ": ja ispruzila desnata raka");
      proveriDaliMozeDaDrzeNesto(levaRaka);
    }

    public void podrzi(String sto){
        if(levaRaka.daSvitkana() || desnaRaka.daSvitkana()){
            stoDrze = sto;
            System.out.println(ime+ ": go drzi " + sto);
        }
            System.out.println(ime+ ": ne moze da go drzi " + sto);

    }
}
