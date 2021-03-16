#include <QApplication>
#include <QDialog>
#include <QString>
#include <QLineEdit>
#include <QPushButton>

class Keyboard : public QDialog
{
    Q_OBJECT
public:
    explicit NumPad(QWidget *parent = 0);
    void retranslateUi(QDialog *n);
    ~NKeyboard() {}
    int getInt()           { return m_string.toUInt();   }
    double getDouble()     { return m_string.toDouble(); }
  
private slots:
    //defines the keys added to on-screen keyboard
  
    //first row, first column
    void one_key()       { addChar('1'); }
    void two_key()       { addChar('2'); }
    void three_key()     { addChar('3'); }
    void four_key()      { addChar('4'); }
    void five_key()      { addChar('5'); }
    void six_key()       { addChar('6'); }
    //first row, second column
    void tilde_key()     { addChar('~'); }
    void grave_key()     { addChar('`'); }
    void exclaim_key()   { addChar('!'); }
    void at_key()        { addChar('@'); }
    
    //second row, first column
    void seven_key()     { addChar('7'); }
    void eight_key()     { addChar('8'); }
    void nine_key()      { addChar('9'); }
    void zero_key()      { addChar('0'); }
    void hyphen_key()    { addChar('-'); }
    void undersc_key()   { addChar('_'); }
    //second row, second column
    void equals_key()    { addChar('='); }
    void plus_key()      { addChar('+'); }
    void pound_key()     { addChar('#'); }
    void dollar_key()    { addChar('$'); }
  
    //third row, first column
    void a_key()         { addChar('a'); }
    void e_key()         { addChar('e'); }
    void i_key()         { addChar('i'); }
    void o_key()         { addChar('o'); }
    void u_key()         { addChar('u'); }
    void y_key()         { addChar('y'); }
    //third row, second column
    void percent_key()   { addChar('%'); }
    void circum_key()    { addChar('^'); }
    void ampersan_key()  { addChar('&'); }
    void star_key()      { addChar('*'); }
  
    //fourth row, first column
    void q_key()         { addChar('q'); }
    void w_key()         { addChar('w'); }
    void r_key()         { addChar('r'); }
    void t_key()         { addChar('t'); }
    void p_key()         { addChar('p'); }
    void s_key()         { addChar('s'); }
    //fourth row, second column
    void lparen_key()    { addChar('('); }
    void rparen_key()    { addChar(')'); }
    void lbracket_key()  { addChar('['); }
    void rbracket_key()  { addChar(']'); }
    
    //fifth row, first column
    void d_key()         { addChar('d'); }
    void f_key()         { addChar('f'); }
    void g_key()         { addChar('g'); }
    void h_key()         { addChar('h'); }
    void j_key()         { addChar('j'); }
    void k_key()         { addChar('k'); }
    //fifth row, second column
    void lcurly_key()    { addChar('{'); }
    void rcurly_key()    { addChar('}'); }
    void bslash_key()    { addChar('\\'); }
    void straight_key()  { addChar('|'); }
    
    //sixth row, first column
    void l_key()         { addChar('l'); }
    void z_key()         { addChar('z'); }
    void x_key()         { addChar('x'); }
    void c_key()         { addChar('c'); }
    void v_key()         { addChar('v'); }
    void b_key()         { addChar('b'); }
    //sixth row, second column
    void semic_key()     { addChar(';'); }
    void colon_key()     { addChar(':'); }
    void squote_key()    { addChar('\''); }
    void dquote_key()    { addChar('\"'); }
  
    //seventh row, first column
    void n_key()         { addChar('n'); }
    void m_key()         { addChar('m'); }
    void tab_key()       { addChar('\t'); }
    void backspc_key()   { addChar('\b'); }  
    void ok_key()        { this->accept(); }
    void esc_key()       { this->reject(); }
    //seventh row, second column
    void comma_key()     { addChar(','); }
    void period()        { addChar('.'); }
    void lthan_key()     { addChar('<'); }
    void gthan_key()     { addChar('>'); }
    void fslash_key()    { addChar('/'); }
    void qmark_key()     { addChar('\?'); }
    //eigth row
    void space_key()     { addChar(' '); }
    void enter_key()     { addChar(\n); }
    
private:
    //helper function to set the text button
    void addChar(char c)
    {
        m_string.append( c );
        m_display->setText(m_string);
    }
    
    //var declarations
    QString m_string;
    QLineEdit   *m_display;
  
    QPushButton *m_0, *m_1, *m_2, *m_3, *m_4, *m_5, *m_6, *m_7, *m_8, *m_9;
    QPushButton *m_a, *m_b, *m_c, *m_d, *m_e, *m_f, *m_g, *m_h, *m_i, *m_j;
    QPushButton *m_k, *m_l, *m_m, *m_n, *m_o, *m_p, *m_q, *m_r, *m_s, *m_t;
    QPushButton *m_u, *m_v, *m_w, *m_x, *m_y, *m_z;
  
    QPushButton *m_tilde, *m_grave, *m_exclaim, *m_at;
    QPushButton *m_pound, *m_dollar, *m_percent, *m_circum;
    QPushButton *m_ampersan, *m_star, *m_lparen, *m_rparen;
    QPushButton *m_hyphen, *m_undersc, *m_equal, *m_plus;
    QPushButton *m_lbracket, *m_rbracket, *m_lcurly, *m_rcurly;
    QPushButton *m_bslash, *m_straight, *m_semic, *m_colon;
    QPushButton *m_squote, *m_dquote, *m_comma, *m_period;
    QPushButton *m_lthan, *m_gthan, *m_fslash, *m_qmark;

    QPushButton *m_ok, *m_esc, *m_tab, *m_backspc, *m_space, *m_enter;
};
