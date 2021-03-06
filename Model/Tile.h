#ifndef TILE_H
#define TILE_H

#include<QImage>
#include <QJsonObject>
#include <QVector2D>

class Tile
{

private:
    float m_orientation;// rad ?
    QString m_strImgTilesheetFilePath;
    QVector<QVector2D> m_coordTexture;

    // height of the tile
    float m_fHeight;

    // At the begining it's 0 then after loading all the required texture (tilsheet) to draw the map in BattleRender,
    // it takes the value of its own texture value.
    // that way the index is use to switch from one tilsheet to another, depend on the texture
    int m_iIndexTexture;

    // To render a tile, a square bounding box is defined by m_coordTexture.
    // This square contains the texture's sprite for the mapping
    // If the texture exceeds the base square by the top or the bottom
    // m_iNbSquareUp and m_iNbSquareDown allow to know how many square up or down are necessary to cover the whole texture
    int m_iNbSquareUp;
    int m_iNbSquareDown;


public:
     Tile();
    ~Tile();
     void saveTileData(QJsonObject &json)const;
     void loadTileData(const QJsonObject &json);

     // Fonction temporaire avant chargement du fichier
     inline void addCoord(QVector2D i_vec){m_coordTexture<<i_vec;}

     inline const int& getHeightTile()const{return m_fHeight;}
     inline void setHeightTile(float i_fHeight){m_fHeight = i_fHeight;}

     inline const int& getNbSquareUp()const{return m_iNbSquareUp;}
     inline const int& getNbSquareDown()const{return m_iNbSquareDown;}

     inline const int& getIndexTexture()const{return m_iIndexTexture;}
     inline void setIndexTexture(int i_iIndex){m_iIndexTexture = i_iIndex;}// Generate data from code

     inline const float& getTileOrientation()const{return m_orientation;}
     inline void setTileOrientation(float i_fOrientation){m_orientation = i_fOrientation;}// Generate data from code

     inline const QString& getImgTilesheetFilePath()const{return m_strImgTilesheetFilePath;}
     inline void setImgTilesheetFilePath(QString i_strFilePath){m_strImgTilesheetFilePath = i_strFilePath;}// Generate data from code

     inline const QVector<QVector2D>& getCoordTexture()const{return m_coordTexture;}

     // TEMP : il faut une fonction qui clear m_coordTexture tant qu'il y a le bouchon
     inline void cleanVecCoordText(){m_coordTexture.clear();}
};

#endif // TILE_H
