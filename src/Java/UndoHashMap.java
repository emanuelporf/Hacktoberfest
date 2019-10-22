package src.Java;

import java.util.HashMap;

public class UndoHashMap<K, V> extends HashMap<K, V> {

    private K lastKeyEntered;

    public V put(K k, V v) {
        lastKeyEntered = k;
        return super.put(k, v);
    }

    public void removeLastEntered() {
        remove(lastKeyEntered);
    }
}
