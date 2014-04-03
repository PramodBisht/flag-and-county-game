#include<QtGui>

class DrawingView : public QGraphicsView {
public:

    DrawingView(QWidget* parent=0) : QGraphicsView(parent) {
        setGeometry(200,100,600,400);
        setWindowTitle("FlAG Game");
        setRenderHint(QPainter::Antialiasing);
        setRenderHint(QPainter::HighQualityAntialiasing);
        setRenderHint(QPainter::TextAntialiasing);
        setRenderHint(QPainter::SmoothPixmapTransform);
    }

    void keyPressEvent ( QKeyEvent * e ) {
        if (e->key() == Qt::Key_Escape)
            qApp->exit();
    }

    QSize sizeHint() const {
        return QSize(640, 490);
    }

};

class DrawingScene : public QGraphicsScene {
public:

    DrawingScene(QObject* parent=0) : QGraphicsScene(parent) {
        row=column=0;
    }

    void putInTheRightPlace(QGraphicsItem* item) {
        QPointF point (column*WIDTH, row*HEIGHT);
        item->setPos(point);
    }

    QGraphicsRectItem* createBox() {
        QGraphicsRectItem *rect = addRect(0,0,100,100, QPen(Qt::blue));
        rect->setFlags(QGraphicsItem::ItemIsMovable);
        putInTheRightPlace(rect);
        return rect;
    }


    void addBoxedItem(QGraphicsItem* item, QString title) {
        QGraphicsRectItem* box = createBox();
        item->setParentItem(box);

        QString htmlTitle = QString("<center>%1</center>").arg(title);
        QGraphicsTextItem *textItem = new QGraphicsTextItem();
        textItem->setDefaultTextColor(Qt::blue);
        QFont font;
        font.setPixelSize(10);
        textItem->setFont(font);

        textItem->setHtml(htmlTitle);

        textItem->setTextWidth(WIDTH);
        textItem->setParentItem(box);
        textItem->moveBy(0, 110);
        nextPosition();
    }

    void addBoxedShape(QAbstractGraphicsShapeItem *item, QString title) {
        item->setPen(QPen(Qt::red, 2));
        item->setBrush(Qt::yellow);
        addBoxedItem(item, title);
    }

    void nextPosition() {
        column++;
        if (column >= COLS) {
            column = 0;
            row++;
        }
    }

private:
    enum {COLS=4};
    enum {WIDTH=100, HEIGHT=150};
    int row, column;

};

QStringList getImage(){
        QString text;
        QStringList x;
        QFile file("C:\\images\\nations\\flag1.txt");
        file.open(QIODevice::ReadOnly);
        QTextStream stream(&file);
        while(!stream.atEnd())
        {
            text = stream.readLine() ;
            x.append(text);
            //x.append("");
        }
        qDebug()<<x;
        return x;
    }

QGraphicsPixmapItem* setImage(QString loc){
        QPixmap pixmap(loc);
        QSizeF size = pixmap.size();
        QSizeF scale = QSizeF(100.0 / size.width(), 100.0 / size.height());
        QGraphicsPixmapItem *pixmapItem = new QGraphicsPixmapItem(QPixmap(loc));
        pixmapItem->scale(scale.width(), scale.height());
        return pixmapItem;

    }
