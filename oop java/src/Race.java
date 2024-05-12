public class Race {
    public enum SostojbaRace {DIGNATA , SPUSTENA};

    private SostojbaRace sostojbaRace = SostojbaRace.SPUSTENA;

    public void DigniRaka(){
        sostojbaRace = SostojbaRace.DIGNATA;
    }

    public void SpustiRaka(){
        sostojbaRace = SostojbaRace.SPUSTENA;
    }

    public SostojbaRace zemiSostojbaRace(){
        return sostojbaRace;
    }

    public boolean daDignataRaka(){
        return sostojbaRace == SostojbaRace.DIGNATA;
    }
    public boolean daSpustenaRaka(){
        return sostojbaRace == SostojbaRace.SPUSTENA;
    }
}
