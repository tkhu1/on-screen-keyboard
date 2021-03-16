#include <iostream>
#include "main.h"

Keyboard::Keyboard(QWidget *parent) : QDialog(parent)
{
	//sets keyboard object dimensions
	if (this->objectName().isEmpty())
		this->setObjectName(QString::fromUtf8("Keyboard"));
	this->resize(720, 540);

	//creates button object pointers
	m_0, m_1, m_2, m_3, m_4, m_5, m_6, m_7, m_8, m_9 = new QPushButton(this);
	m_a, m_b, m_c, m_d, m_e, m_f, m_g, m_h, m_i, m_j = new QPushButton(this);
	m_k, m_l, m_m, m_n, m_o, m_p, m_q, m_r, m_s, m_t = new QPushButton(this);
	m_u, m_v, m_w, m_x, m_y, m_z = new QPushButton(this);

	m_tilde, m_grave, m_exclaim, m_at = new QPushButton(this);
	m_pound, m_dollar, m_percent, m_circum = new QPushButton(this);
	m_ampersan, m_star, m_lparen, m_rparen = new QPushButton(this);
	m_hyphen, m_undersc, m_equal, m_plus = new QPushButton(this);
	m_lbracket, m_rbracket, m_lcurly, m_rcurly = new QPushButton(this);
	m_bslash, m_straight, m_semic, m_colon = new QPushButton(this);
	m_squote, m_dquote, m_comma, m_period = new QPushButton(this);
	m_lthan, m_gthan, m_fslash, m_qmark = new QPushButton(this);

	m_ok, m_esc, m_tab, m_backspc, m_space, m_enter = new QPushButton(this);
	m_display = new QLineEdit(this);

	//sets each button's object
	m_0->setObjectName      (QString::fromUtf8("m_0"));
	m_1->setObjectName      (QString::fromUtf8("m_1"));
	m_2->setObjectName      (QString::fromUtf8("m_2"));
	m_3->setObjectName      (QString::fromUtf8("m_3"));
	m_4->setObjectName      (QString::fromUtf8("m_4"));
	m_5->setObjectName      (QString::fromUtf8("m_5"));
	m_6->setObjectName      (QString::fromUtf8("m_6"));
	m_7->setObjectName      (QString::fromUtf8("m_7"));
	m_8->setObjectName      (QString::fromUtf8("m_8"));
	m_9->setObjectName      (QString::fromUtf8("m_9"));

	m_a->setObjectName      (QString::fromUtf8("m_a"));      
	m_b->setObjectName      (QString::fromUtf8("m_b"));      
	m_c->setObjectName      (QString::fromUtf8("m_c"));      
	m_d->setObjectName      (QString::fromUtf8("m_d"));      
	m_e->setObjectName      (QString::fromUtf8("m_e"));      
	m_f->setObjectName      (QString::fromUtf8("m_f"));      
	m_g->setObjectName      (QString::fromUtf8("m_g"));      
	m_h->setObjectName      (QString::fromUtf8("m_h"));      
	m_i->setObjectName      (QString::fromUtf8("m_i"));      
	m_j->setObjectName      (QString::fromUtf8("m_j"));     
	m_k->setObjectName      (QString::fromUtf8("m_k"));      
	m_l->setObjectName      (QString::fromUtf8("m_l"));      
	m_m->setObjectName      (QString::fromUtf8("m_m"));      
	m_n->setObjectName      (QString::fromUtf8("m_n"));      
	m_o->setObjectName      (QString::fromUtf8("m_o"));      
	m_p->setObjectName      (QString::fromUtf8("m_p"));      
	m_q->setObjectName      (QString::fromUtf8("m_q"));      
	m_r->setObjectName      (QString::fromUtf8("m_r"));      
	m_s->setObjectName      (QString::fromUtf8("m_s"));      
	m_t->setObjectName      (QString::fromUtf8("m_t"));     
	m_u->setObjectName      (QString::fromUtf8("m_u"));      
	m_v->setObjectName      (QString::fromUtf8("m_v"));      
	m_w->setObjectName      (QString::fromUtf8("m_w"));      
	m_x->setObjectName      (QString::fromUtf8("m_x"));      
	m_y->setObjectName      (QString::fromUtf8("m_y"));      
	m_z->setObjectName      (QString::fromUtf8("m_z"));     

	m_tilde->setObjectName         (QString::fromUtf8("m_tilde"));      
	m_grave->setObjectName         (QString::fromUtf8("m_grave"));      
	m_exclaim->setObjectName       (QString::fromUtf8("m_exclaim"));      
	m_at->setObjectName            (QString::fromUtf8("m_at"));     
	m_pound->setObjectName         (QString::fromUtf8("m_pound"));      
	m_dollar->setObjectName        (QString::fromUtf8("m_dollar"));     
	m_percent->setObjectName       (QString::fromUtf8("m_percent"));      
	m_circum->setObjectName        (QString::fromUtf8("m_circum"));     
	m_ampersan->setObjectName      (QString::fromUtf8("m_ampersan"));      
	m_star->setObjectName          (QString::fromUtf8("m_star"));      
	m_lparen->setObjectName        (QString::fromUtf8("m_lparen"));      
	m_rparen->setObjectName        (QString::fromUtf8("m_rparen"));     
	m_hyphen->setObjectName        (QString::fromUtf8("m_hyphen"));      
	m_undersc->setObjectName       (QString::fromUtf8("m_undersc"));      
	m_equal->setObjectName         (QString::fromUtf8("m_equal"));      
	m_plus->setObjectName          (QString::fromUtf8("m_plus"));     
	m_lbracket->setObjectName      (QString::fromUtf8("m_lbracket"));      
	m_rbracket->setObjectName      (QString::fromUtf8("m_rbracket"));      
	m_lcurly->setObjectName        (QString::fromUtf8("m_lcurly"));      
	m_rcurly->setObjectName        (QString::fromUtf8("m_rcurly"));     
	m_bslash->setObjectName        (QString::fromUtf8("m_bslash"));      
	m_straight->setObjectName      (QString::fromUtf8("m_straight"));      
	m_semic->setObjectName         (QString::fromUtf8("m_semic"));      
	m_colon->setObjectName         (QString::fromUtf8("m_colon"));     
	m_squote->setObjectName        (QString::fromUtf8("m_squote"));      
	m_dquote->setObjectName        (QString::fromUtf8("m_dquote"));      
	m_comma->setObjectName         (QString::fromUtf8("m_comma"));      
	m_period->setObjectName        (QString::fromUtf8("m_period"));     
	m_lthan->setObjectName         (QString::fromUtf8("m_lthan"));      
	m_gthan->setObjectName         (QString::fromUtf8("m_gthan"));      
	m_fslash->setObjectName        (QString::fromUtf8("m_fslash"));      
	m_qmark->setObjectName         (QString::fromUtf8("m_qmark"));     

	m_ok->setObjectName            (QString::fromUtf8("m_ok"));      
	m_esc->setObjectName           (QString::fromUtf8("m_esc"));      
	m_tab->setObjectName           (QString::fromUtf8("m_tab"));      
	m_backspc->setObjectName       (QString::fromUtf8("m_backspc"));     
	m_space->setObjectName         (QString::fromUtf8("m_space"));     
	m_enter->setObjectName         (QString::fromUtf8("m_enter"));     
	m_display->setObjectName       (QString::fromUtf8("m_display"));

	//sets each button's x,y coord placement in keyboard
	m_0->setGeometry(      QRect(200 , 120, 51 , 51 ));          
	m_1->setGeometry(      QRect(20 , 60 , 51 , 51 ));    
	m_2->setGeometry(      QRect(80 , 60, 51 , 51 ));     
	m_3->setGeometry(      QRect(140 , 60, 51 , 51 ));         
	m_4->setGeometry(      QRect(200 , 60, 51 , 51 ));          
	m_5->setGeometry(      QRect(260 , 60, 51 , 51 ));          
	m_6->setGeometry(      QRect(320 , 60, 51 , 51 ));              
	m_7->setGeometry(      QRect(20 , 120, 51 , 51 ));
	m_8->setGeometry(      QRect(80 , 120, 51 , 51 ));         
	m_9->setGeometry(      QRect(140 , 120, 51 , 51 ));        

	m_a->setGeometry(      QRect(20 , 180, 51 , 51 ));     
	m_b->setGeometry(      QRect(320 , 360, 51 , 51 ));             
	m_c->setGeometry(      QRect(200 , 360, 51 , 51 ));            
	m_d->setGeometry(      QRect(20 , 300, 51 , 51 ));        
	m_e->setGeometry(      QRect(80 , 180, 51 , 51 ));              
	m_f->setGeometry(      QRect(80 , 300, 51 , 51 ));                
	m_g->setGeometry(      QRect(140 , 300, 51 , 51 ));            
	m_h->setGeometry(      QRect(200 , 300, 51 , 51 ));          
	m_i->setGeometry(      QRect(140 , 180, 51 , 51 ));              
	m_j->setGeometry(      QRect(260 , 300, 51 , 51 ));                 
	m_k->setGeometry(      QRect(320 , 300, 51 , 51 ));              
	m_l->setGeometry(      QRect(20 , 360, 51 , 51 ));      
	m_m->setGeometry(      QRect(80 , 420, 51 , 51 ));           
	m_n->setGeometry(      QRect(20 , 420, 51 , 51 ));       
	m_o->setGeometry(      QRect(200 , 180, 51 , 51 ));           
	m_p->setGeometry(      QRect(260 , 240, 51 , 51 ));              
	m_q->setGeometry(      QRect(20 , 240, 51 , 51 ));       
	m_r->setGeometry(      QRect(140 , 240, 51 , 51 ));         
	m_s->setGeometry(      QRect(320 , 240, 51 , 51 ));           
	m_t->setGeometry(      QRect(200 , 240, 51 , 51 ));           
	m_u->setGeometry(      QRect(260 , 180, 51 , 51 ));              
	m_v->setGeometry(      QRect(260 , 360, 51 , 51 ));              
	m_w->setGeometry(      QRect(80 , 240, 51 , 51 ));           
	m_x->setGeometry(      QRect(140 , 360, 51 , 51 ));          
	m_y->setGeometry(      QRect(320 , 180, 51 , 51 ));          
	m_z->setGeometry(      QRect(80 , 360, 51 , 51 ));        

	m_tilde->setGeometry(         QRect(380 , 60, 51 , 51 ));            
	m_grave->setGeometry(         QRect(440 , 60, 51 , 51 ));          
	m_exclaim->setGeometry(       QRect(500 , 60, 51 , 51 ));         
	m_at->setGeometry(            QRect(560 , 60, 51 , 51 ));                
	m_pound->setGeometry(         QRect(500 , 120, 51 , 51 ));                   
	m_dollar-setGeometry(         QRect(560 , 120, 51 , 51 ));                
	m_percent->setGeometry(       QRect(380 , 180, 51 , 51 ));            
	m_circum->setGeometry(        QRect(440 , 180, 51 , 51 ));               
	m_ampersan->setGeometry(      QRect(500 , 180, 51 , 51 ));            
	m_star->setGeometry(          QRect(560 , 180, 51 , 51 ));                
	m_lparen->setGeometry(        QRect(380 , 240, 51 , 51 ));               
	m_rparen->setGeometry(        QRect(440 , 240, 51 , 51 ));         
	m_hyphen->setGeometry(        QRect(260 , 120, 51 , 51 ));               
	m_undersc->setGeometry(       QRect(320 , 120, 51 , 51 ));          
	m_equal->setGeometry(         QRect(380 , 120, 51 , 51 ));          
	m_plus->setGeometry(          QRect(440 , 120, 51 , 51 ));              
	m_lbracket->setGeometry(      QRect(500 , 240, 51 , 51 ));         
	m_rbracket->setGeometry(      QRect(560 , 240, 51 , 51 ));    
	m_lcurly->setGeometry(        QRect(380 , 300, 51 , 51 ));           
	m_rcurly->setGeometry(        QRect(440 , 300, 51 , 51 ));          
	m_bslash->setGeometry(        QRect(500 , 300, 51 , 51 ));        
	m_straight->setGeometry(      QRect(560 , 300, 51 , 51 ));      
	m_semic->setGeometry(         QRect(380 , 360, 51 , 51 ));           
	m_colon->setGeometry(         QRect(440 , 360, 51 , 51 ));               
	m_squote->setGeometry(        QRect(500 , 360, 51 , 51 ));             
	m_dquote->setGeometry(        QRect(560 , 360, 51 , 51 ));              
	m_comma->setGeometry(         QRect(380 , 420, 51 , 51 ));              
	m_period->setGeometry(        QRect(440 , 420, 51 , 51 ));          
	m_lthan->setGeometry(         QRect(500 , 420, 51 , 51 ));          
	m_gthan->setGeometry(         QRect(560 , 420, 51 , 51 ));            
	m_fslash->setGeometry(        QRect(620 , 420, 51 , 51 ));           
	m_qmark->setGeometry(         QRect(680 , 420, 51 , 51 ));          

	m_ok->setGeometry(            QRect(260 , 420, 51 , 51 ));                      
	m_esc->setGeometry(           QRect(320 , 420, 51 , 51 ));             
	m_tab->setGeometry(           QRect(140 , 420, 51 , 51 ));              
	m_backspc->setGeometry(       QRect(200 , 420, 51 , 51 ));         
	m_space->setGeometry(         QRect(20 , 480, 231 , 51 ));     
	m_enter->setGeometry(         QRect(320 , 480, 111 , 51 ));        
	m_display->setGeometry(       QRect(20 , 10 , 711, 41 ));

	retranslateUi(this);

	QMetaObject::connectSlotsByName(this);
}

//sets the button text on the gui
void Keyboard::retranslateUi(QDialog *n)
{
	n->setWindowTitle(QApplication::translate("Keyboard", "Dialog", 0, QApplication::UnicodeUTF8));

	m_0->setText(  QApplication::translate("Keyboard", "0", 0, QApplication::UnicodeUTF8));       
	m_1->setText(  QApplication::translate("Keyboard", "1", 0, QApplication::UnicodeUTF8));       
	m_2->setText(  QApplication::translate("Keyboard", "2", 0, QApplication::UnicodeUTF8));       
	m_3->setText(  QApplication::translate("Keyboard", "3", 0, QApplication::UnicodeUTF8));       
	m_4->setText(  QApplication::translate("Keyboard", "4", 0, QApplication::UnicodeUTF8));       
	m_5->setText(  QApplication::translate("Keyboard", "5", 0, QApplication::UnicodeUTF8));       
	m_6->setText(  QApplication::translate("Keyboard", "6", 0, QApplication::UnicodeUTF8));       
	m_7->setText(  QApplication::translate("Keyboard", "7", 0, QApplication::UnicodeUTF8));       
	m_8->setText(  QApplication::translate("Keyboard", "8", 0, QApplication::UnicodeUTF8));       
	m_9->setText(  QApplication::translate("Keyboard", "9", 0, QApplication::UnicodeUTF8));      

	m_a->setText(  QApplication::translate("Keyboard", "a", 0, QApplication::UnicodeUTF8));       
	m_b->setText(  QApplication::translate("Keyboard", "b", 0, QApplication::UnicodeUTF8));       
	m_c->setText(  QApplication::translate("Keyboard", "c", 0, QApplication::UnicodeUTF8));        
	m_d->setText(  QApplication::translate("Keyboard", "d", 0, QApplication::UnicodeUTF8));          
	m_e->setText(  QApplication::translate("Keyboard", "e", 0, QApplication::UnicodeUTF8));          
	m_f->setText(  QApplication::translate("Keyboard", "f", 0, QApplication::UnicodeUTF8));            
	m_g->setText(  QApplication::translate("Keyboard", "g", 0, QApplication::UnicodeUTF8));           
	m_h->setText(  QApplication::translate("Keyboard", "h", 0, QApplication::UnicodeUTF8));         
	m_i->setText(  QApplication::translate("Keyboard", "i", 0, QApplication::UnicodeUTF8));          
	m_j->setText(  QApplication::translate("Keyboard", "j", 0, QApplication::UnicodeUTF8));         
	m_k->setText(  QApplication::translate("Keyboard", "k", 0, QApplication::UnicodeUTF8));          
	m_l->setText(  QApplication::translate("Keyboard", "l", 0, QApplication::UnicodeUTF8));        
	m_m->setText(  QApplication::translate("Keyboard", "m", 0, QApplication::UnicodeUTF8));         
	m_n->setText(  QApplication::translate("Keyboard", "n", 0, QApplication::UnicodeUTF8));        
	m_o->setText(  QApplication::translate("Keyboard", "o", 0, QApplication::UnicodeUTF8));        
	m_p->setText(  QApplication::translate("Keyboard", "p", 0, QApplication::UnicodeUTF8));       
	m_q->setText(  QApplication::translate("Keyboard", "q", 0, QApplication::UnicodeUTF8));          
	m_r->setText(  QApplication::translate("Keyboard", "r", 0, QApplication::UnicodeUTF8));       
	m_s->setText(  QApplication::translate("Keyboard", "s", 0, QApplication::UnicodeUTF8));       
	m_t->setText(  QApplication::translate("Keyboard", "t", 0, QApplication::UnicodeUTF8));       
	m_u->setText(  QApplication::translate("Keyboard", "u", 0, QApplication::UnicodeUTF8));       
	m_v->setText(  QApplication::translate("Keyboard", "v", 0, QApplication::UnicodeUTF8));       
	m_w->setText(  QApplication::translate("Keyboard", "w", 0, QApplication::UnicodeUTF8));       
	m_x->setText(  QApplication::translate("Keyboard", "x", 0, QApplication::UnicodeUTF8));       
	m_y->setText(  QApplication::translate("Keyboard", "y", 0, QApplication::UnicodeUTF8));       
	m_z->setText(  QApplication::translate("Keyboard", "z", 0, QApplication::UnicodeUTF8));       

	m_tilde->setText(     QApplication::translate("Keyboard", "~", 0, QApplication::UnicodeUTF8));          
	m_grave->setText(     QApplication::translate("Keyboard", "`", 0, QApplication::UnicodeUTF8));          
	m_exclaim->setText(   QApplication::translate("Keyboard", "!", 0, QApplication::UnicodeUTF8));        
	m_at->setText(        QApplication::translate("Keyboard", "@", 0, QApplication::UnicodeUTF8));             
	m_pound->setText(     QApplication::translate("Keyboard", "#", 0, QApplication::UnicodeUTF8));          
	m_dollar->setText(    QApplication::translate("Keyboard", "$", 0, QApplication::UnicodeUTF8));         
	m_percent->setText(   QApplication::translate("Keyboard", "%", 0, QApplication::UnicodeUTF8));        
	m_circum->setText(    QApplication::translate("Keyboard", "^", 0, QApplication::UnicodeUTF8));         
	m_ampersan->setText(  QApplication::translate("Keyboard", "&", 0, QApplication::UnicodeUTF8));       
	m_star->setText(      QApplication::translate("Keyboard", "*", 0, QApplication::UnicodeUTF8));           
	m_lparen->setText(    QApplication::translate("Keyboard", "(", 0, QApplication::UnicodeUTF8));         
	m_rparen->setText(    QApplication::translate("Keyboard", ")", 0, QApplication::UnicodeUTF8));         
	m_hyphen->setText(    QApplication::translate("Keyboard", "-", 0, QApplication::UnicodeUTF8));         
	m_undersc->setText(   QApplication::translate("Keyboard", "_", 0, QApplication::UnicodeUTF8));        
	m_equal->setText(     QApplication::translate("Keyboard", "=", 0, QApplication::UnicodeUTF8));           
	m_plus->setText(      QApplication::translate("Keyboard", "+", 0, QApplication::UnicodeUTF8));       
	m_lbracket->setText(  QApplication::translate("Keyboard", "[", 0, QApplication::UnicodeUTF8));       
	m_rbracket->setText(  QApplication::translate("Keyboard", "]", 0, QApplication::UnicodeUTF8));       
	m_lcurly->setText(    QApplication::translate("Keyboard", "{", 0, QApplication::UnicodeUTF8));         
	m_rcurly->setText(    QApplication::translate("Keyboard", "}", 0, QApplication::UnicodeUTF8));         
	m_bslash->setText(    QApplication::translate("Keyboard", "\\", 0, QApplication::UnicodeUTF8));         
	m_straight->setText(  QApplication::translate("Keyboard", "|", 0, QApplication::UnicodeUTF8));       
	m_semic->setText(     QApplication::translate("Keyboard", ";", 0, QApplication::UnicodeUTF8));          
	m_colon->setText(     QApplication::translate("Keyboard", ":", 0, QApplication::UnicodeUTF8));          
	m_squote->setText(    QApplication::translate("Keyboard", "\'", 0, QApplication::UnicodeUTF8));         
	m_dquote->setText(    QApplication::translate("Keyboard", "\"", 0, QApplication::UnicodeUTF8));         
	m_comma->setText(     QApplication::translate("Keyboard", ",", 0, QApplication::UnicodeUTF8));          
	m_period->setText(    QApplication::translate("Keyboard", ".", 0, QApplication::UnicodeUTF8));         
	m_lthan->setText(     QApplication::translate("Keyboard", "<", 0, QApplication::UnicodeUTF8));          
	m_gthan->setText(     QApplication::translate("Keyboard", ">", 0, QApplication::UnicodeUTF8));          
	m_fslash->setText(    QApplication::translate("Keyboard", "/", 0, QApplication::UnicodeUTF8));         
	m_qmark->setText(     QApplication::translate("Keyboard", "\?", 0, QApplication::UnicodeUTF8));          

	m_ok->setText(        QApplication::translate("Keyboard", "OK", 0, QApplication::UnicodeUTF8));             
	m_esc->setText(       QApplication::translate("Keyboard", "ESC", 0, QApplication::UnicodeUTF8));            
	m_tab->setText(       QApplication::translate("Keyboard", "TAB", 0, QApplication::UnicodeUTF8));            
	m_backspc->setText(   QApplication::translate("Keyboard", "BSC", 0, QApplication::UnicodeUTF8));   
	m_space->setText(     QApplication::translate("Keyboard", "SPACE", 0, QApplication::UnicodeUTF8));   
	m_enter->setText(     QApplication::translate("Keyboard", "ENTER", 0, QApplication::UnicodeUTF8));      
}

//main
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Keyboard n(0);
    n.exec();

    std::cout << n.getString();

    return a.exec();
}
