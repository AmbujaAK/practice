import java.awt.Dimension;
import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;

import javax.swing.JButton;
import javax.swing.JFrame;
import javax.swing.JLabel;
import javax.swing.JOptionPane;
import javax.swing.JPanel;

public final class helloWorldSwing {

	public static void main(final String[] args) {
		final helloWorldSwing app = new helloWorldSwing();
		app.buildAndDisplayGui();
	}

	private void buildAndDisplayGui() {
		final JFrame frame = new JFrame("Swing Application");
		buildContent(frame);
		frame.setMinimumSize(new Dimension(300, 180));
		frame.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
		frame.pack();
		frame.setLocation(400, 300);
		frame.setVisible(true);
	}

	private void buildContent(final JFrame aFrame) {
		final JPanel panel = new JPanel();
		panel.add(new JLabel("Please press the button:"));

		final JButton okButton = new JButton("OK");
		okButton.addActionListener(new ShowDialog(aFrame));
		panel.add(okButton);

		aFrame.getContentPane().add(panel);
	}

	private static final class ShowDialog implements ActionListener {

		ShowDialog(final JFrame aFrame) {
			fFrame = aFrame;
		}

		@Override
		public void actionPerformed(final ActionEvent aEvent) {
			JOptionPane.showMessageDialog(fFrame, "Hello, World!!");
		}

		private final JFrame fFrame;
	}
}
