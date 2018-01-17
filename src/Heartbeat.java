
public class Heartbeat {

	public static void main(String[] args) {
		int n = 0;
		try {
			while (true) {
				System.out.println(n + " joels");
				Thread.sleep(1000);
				n++;
			}
		} catch (InterruptedException e) {
			// TODO Auto-generated catch block
			e.printStackTrace();
		}

	}

}
