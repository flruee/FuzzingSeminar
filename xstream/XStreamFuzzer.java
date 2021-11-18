import com.thoughtworks.xstream.XStream;

public class XStreamFuzzer {
    public static void fuzzerTestOneInput(byte[] input){
        XStream xstream = new XStream();
      	String s = xstream.toXML(input);
	
	}
}
