public class Macka {
    private String ime;
    private String boja;
    private int vozrast;
    private String stoImaVoRaka;

    private Race levoRace;
    private Race desnoRace;

    public void setIme(String ime) {
        this.ime = ime;
    }

    public void setBoja(String boja) {
        this.boja = boja;
    }

    public void setVozrast(int vozrast) {
        this.vozrast = vozrast;
    }

    public Macka(String ime, String boja, int vozrast) {
        this.ime = ime;
        this.boja = boja;
        this.vozrast = vozrast;
        this.levoRace = new Race();
        this.desnoRace = new Race();
        this.stoImaVoRaka = "NISTO";
    }

    public String getIme() {
        return ime;
    }

    public String getBoja() {
        return boja;
    }

    public int getVozrast() {
        return vozrast;
    }

    public String getStoImaVoRaka() {
        return stoImaVoRaka;
    }

    public void digniLevaRaka(){
        levoRace.DigniRaka();
        System.out.println(ime + " ja digna levata rakata");
    }

    public void digniDesnaRaka(){
        desnoRace.DigniRaka();
        System.out.println(ime + " ja digna desnata raka");
    }

    public void spustiLevaRaka(){
        levoRace.SpustiRaka();
        System.out.println(ime + " ja spusti levata raka");
        proveriDaliMozeDaDrzeNestoMackata(desnoRace);
    }

    public void spustiDesnaRaka(){
    desnoRace.SpustiRaka();
        System.out.println(ime + " ja spusti desnata raka");
        proveriDaliMozeDaDrzeNestoMackata(levoRace);
    }
    private void proveriDaliMozeDaDrzeNestoMackata(Race race){
        if(race.daSpustenaRaka()){
            System.out.println(ime +" go frli" + stoImaVoRaka);
            stoImaVoRaka = "NISTO";
        }
    }
    public void drzi(String stoDrziMackata){

        if(levoRace.daDignataRaka() || desnoRace.daDignataRaka()){
            stoImaVoRaka = stoDrziMackata;
            System.out.println(ime + " drzi " + stoImaVoRaka);
        }
        System.out.println(ime + " ne moze da drzi " + stoImaVoRaka);
    }
}
