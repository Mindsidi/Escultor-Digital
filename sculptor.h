#ifndef sculptor_h
#define sculptor_h
#include <iostream>

using namespace std;
/**
 * @brief The Voxel struct
 * Armazena os valores das cores e alpha
 * E se é ativo ou não
 */
struct Voxel
{
    float r,g,b;
    float a;
    bool isOn;
};
/**
 * @brief The Sculptor class
 */
class Sculptor {
protected:

  Voxel ***v;
  int nx,ny,nz;
  float r,g,b,a;
public:

  Sculptor(int _nx, int _ny, int _nz);
  ~Sculptor();
  /**
   * @brief setColor Define a cor da figura
   * @param r Recebe float que será o valor de "r"ed(Vermelho)
   * @param g Recebe float que será o valor de "g"reen(Verde)
   * @param b Recebe float que será o valor de "b"lue(Azul)
   * @param alpha Recebe float que será o valor de alpha que será o quã transparente é a peça(alpha)
   */
  void setColor(float r, float g, float b, float alpha);
  /**
   * @brief putVoxel Inicializa o voxel
   * @param x Atribui o valor a coordenada x
   * @param y Atribui o valor a coordenada y
   * @param z Atribui o valor a coordenada z
   */
  void putVoxel(int x, int y, int z);
  /**
   * @brief cutVoxel Desabilida o voxel
   * @param x Atribui o valor a coordenada x
   * @param y Atribui o valor a coordenada y
   * @param z Atribui o valor a coordenada z
   */
  void cutVoxel(int x, int y, int z);
  /**
   * @brief putBox Cria um quadrado dentro da matriz 3d
   * @param x0 valor inicial de x na formula
   * @param x1 valor final de x na formula
   * @param y0 valor inicial de y na formula
   * @param y1 valor final de y na formula
   * @param z0 valor inicial de z na formula
   * @param z1 valor final de z na formula
   */
  void putBox(int x0, int x1, int y0, int y1, int z0, int z1);
  /**
   * @brief cutBox Desabilita voxels em formato de quadrado dentro da matriz 3d
   * @param x0 valor inicial de x na formula
   * @param x1 valor final de x na formula
   * @param y0 valor inicial de y na formula
   * @param y1 valor final de y na formula
   * @param z0 valor inicial de z na formula
   * @param z1 valor final de y na formula
   */
  void cutBox(int x0, int x1, int y0, int y1, int z0, int z1);
  /**
   * @brief putSphere Cria uma esfera dentro da matriz 3d, a formula utilizada pode ser encontrada nesse site:
   * http://www.mat.ufpb.br/sergio/winplot/vetorial/quadricas.html#:~:text=1.2.-,Elips%C3%B3ide,os%20eixos%20maior%20e%20menor
   * @param xcenter Local em x que representa o centro da esfera
   * @param ycenter Local em y que representa o centro da esfera
   * @param zcenter Local em z que representa o centro da esfera
   * @param radius Raio da esfera
   */
  void putSphere(int xcenter, int ycenter, int zcenter, int radius);
  /**
   * @brief cutSphere Desabilita voxels em formato de esfera dentro da matriz 3d, a formula utilizada pode ser encontrada nesse site:
   * http://www.mat.ufpb.br/sergio/winplot/vetorial/quadricas.html#:~:text=1.2.-,Elips%C3%B3ide,os%20eixos%20maior%20e%20menor
   * @param xcenter Local em x que representa o centro da esfera
   * @param ycenter Local em y que representa o centro da esfera
   * @param zcenter Local em z que representa o centro da esfera
   * @param radius Raio da esfera
   */
  void cutSphere(int xcenter, int ycenter, int zcenter, int radius);
  /**
   * @brief putEllipsoid Cria uma elipse dentro da matriz 3d, a formula utilizada pode ser encontrada nesse site:
   * http://www.mat.ufpb.br/sergio/winplot/vetorial/quadricas.html#:~:text=1.2.-,Elips%C3%B3ide,os%20eixos%20maior%20e%20menor
   * @param xcenter Local em x que representa o centro da elipse
   * @param ycenter Local em y que representa o centro da elipse
   * @param zcenter Local em z que representa o centro da elipse
   * @param rx Raio de x
   * @param ry Raio de y
   * @param rz Raio de z
   */
  void putEllipsoid(int xcenter, int ycenter, int zcenter, int rx, int ry, int rz);
  /**
   * @brief cutEllipsoid Desabilita voxels em formato de elipse dentro da matriz 3d, a formula utilizada pode ser encontrada nesse site:
   * http://www.mat.ufpb.br/sergio/winplot/vetorial/quadricas.html#:~:text=1.2.-,Elips%C3%B3ide,os%20eixos%20maior%20e%20menor
   * @param xcenter Local em x que representa o centro da elipse
   * @param ycenter Local em y que representa o centro da elipse
   * @param zcenter Local em z que representa o centro da elipse
   * @param rx Raio de x
   * @param ry Raio de y
   * @param rz Raio de z
   */
  void cutEllipsoid(int xcenter, int ycenter, int zcenter, int rx, int ry, int rz);
  /**
   * @brief writeOFF
   * @param filename Recebe o que foi indicado, abre esse arquivo e escreve dentro dele os vertices e faces
   */
  void writeOFF(char* filename);
};

#endif // SCULPTOR_H
