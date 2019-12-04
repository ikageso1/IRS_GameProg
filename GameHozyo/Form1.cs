using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Windows.Forms;

namespace gameHozyo
{
    public partial class Form1 : Form
    {
        public Form1()
        {
            InitializeComponent();
        }

        private void button1_Click(object sender, EventArgs e)
        {
            text_copy("メインプログラム");
        }
        private void text_copy(String s)
        {
            Clipboard.SetText(s);
        }

        private void button2_Click(object sender, EventArgs e)
        {
            text_copy("くりかえしはじめ");
        }

        private void button3_Click(object sender, EventArgs e)
        {
            text_copy("くりかえしおわり");
        }

        private void button4_Click(object sender, EventArgs e)
        {
            text_copy("もし()");
        }

        private void button5_Click(object sender, EventArgs e)
        {
            text_copy("くりかえす()");
        }

        private void button6_Click(object sender, EventArgs e)
        {
            text_copy("ばんごう");
        }

        private void button7_Click(object sender, EventArgs e)
        {
            text_copy("{");
        }

        private void button8_Click(object sender, EventArgs e)
        {
            text_copy("}");
        }

        private void button9_Click(object sender, EventArgs e)
        {
            text_copy(";");
        }

        private void button10_Click(object sender, EventArgs e)
        {
            text_copy("=");
        }

        private void button13_Click(object sender, EventArgs e)
        {
            text_copy("よこ");
        }

        private void button14_Click(object sender, EventArgs e)
        {
            text_copy("たて");
        }

        private void button11_Click(object sender, EventArgs e)
        {
            text_copy("いしのよこ");
        }

        private void button12_Click(object sender, EventArgs e)
        {
            text_copy("いしのたて");
        }

        private void button15_Click(object sender, EventArgs e)
        {
            text_copy("いしの大きさ");
        }

        private void button16_Click(object sender, EventArgs e)
        {
            text_copy("大きさ");
        }

        private void button17_Click(object sender, EventArgs e)
        {
            text_copy("絵をかく();");
        }

        private void button19_Click(object sender, EventArgs e)
        {
            text_copy("プログラムをおわる");
        }

        private void button18_Click(object sender, EventArgs e)
        {
            text_copy("プログラムをはじめる");
        }

        private void button20_Click(object sender, EventArgs e)
        {
            text_copy("→がおされた");
        }

        private void button21_Click(object sender, EventArgs e)
        {
            text_copy("←がおされた");
        }

        private void button23_Click(object sender, EventArgs e)
        {
            text_copy("↑がおされた");
        }

        private void button22_Click(object sender, EventArgs e)
        {
            text_copy("↓がおされた");
        }

        private void button24_Click(object sender, EventArgs e)
        {
            text_copy("スペースがおされた");
        }

        private void button25_Click(object sender, EventArgs e)
        {
            text_copy("\"");
        }

        private void button26_Click(object sender, EventArgs e)
        {
            text_copy("[");
        }

        private void button27_Click(object sender, EventArgs e)
        {
            text_copy("]");
        }

        private void button28_Click(object sender, EventArgs e)
        {
            text_copy("円をかく();");
        }

        private void button29_Click(object sender, EventArgs e)
        {
            text_copy(",");
        }

        private void button30_Click(object sender, EventArgs e)
        {
            text_copy("くりかえしをぬける");
        }

        private void button31_Click(object sender, EventArgs e)
        {
            text_copy("あか");
        }

        private void button32_Click(object sender, EventArgs e)
        {
            text_copy("みどり");
        }

        private void button33_Click(object sender, EventArgs e)
        {
            text_copy("あお");
        }

        private void button34_Click(object sender, EventArgs e)
        {
            text_copy("くろ");
        }

        private void button35_Click(object sender, EventArgs e)
        {
            text_copy("そうでない");
        }

        private void button36_Click(object sender, EventArgs e)
        {
            text_copy("ランダム()");
        }

        private void button37_Click(object sender, EventArgs e)
        {
            text_copy("ぶつかったら()");
        }

        private void button38_Click(object sender, EventArgs e)
        {
            text_copy("かず");
        }

        private void button39_Click(object sender, EventArgs e)
        {
            text_copy("より大きい");
        }

        private void button40_Click(object sender, EventArgs e)
        {
            text_copy("より小さい");
        }

        private void button41_Click(object sender, EventArgs e)
        {
            text_copy("==");
        }

        private void button42_Click(object sender, EventArgs e)
        {
            text_copy("HP");
        }

        private void button43_Click(object sender, EventArgs e)
        {
            text_copy("+");
        }

        private void button44_Click(object sender, EventArgs e)
        {
            text_copy("-");
        }

        private void button45_Click(object sender, EventArgs e)
        {
            text_copy("小数");
        }

        private void button46_Click(object sender, EventArgs e)
        {
            text_copy("文字");
        }

        private void button47_Click(object sender, EventArgs e)
        {
            text_copy("しろ");
        }

        private void button48_Click(object sender, EventArgs e)
        {
            text_copy("ふやす");
        }

        private void button49_Click(object sender, EventArgs e)
        {
            text_copy("へらす");
        }

        private void button50_Click(object sender, EventArgs e)
        {
            text_copy("ESCキーがおされた");
        }
    }
}
