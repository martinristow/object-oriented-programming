public class Raka {
    public enum Sostojba { SOBRANA , IZPRUZENA};

    private Sostojba sostojba = Sostojba.IZPRUZENA;

    public void zberi(){
        sostojba = Sostojba.SOBRANA;
    }

    public void ispruzi(){
        sostojba = Sostojba.IZPRUZENA;
    }

    public Sostojba getSostojba(){
        return sostojba;
    }

    public boolean daSvitkana(){
        return sostojba==Sostojba.IZPRUZENA.SOBRANA;
    }

    public boolean daIspruzena(){
        return sostojba==Sostojba.IZPRUZENA;
    }

}
