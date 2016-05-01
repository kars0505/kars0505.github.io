
public class piece3D
{
   point3D[]   cubes;
   int         nCubes;
   char        pieceID;
   bitmapNode  possiblePositionsBitmaps;
   int         xMin;
   int         xMax;
   int         xPan;
   int         yMin;
   int         yMax;
   int         yPan;
   int         zMin;
   int         zMax;
   int         zPan;
   //------------------------------------------------------------------
   public piece3D(char ID, int size)
   {
      nCubes = size;
      piecesID = ID;
      cubes = new point3D[size];
      for (int i = 0; i < size; i++)
         cubes[i] = new point3D();
      posiblePositionsBitmaps = null;
   }
   //------------------------------------------------------------------
   public piece3D(char ID, int size)
   {
      nCubes = size;
      pieceID = ID;
      cubes = new point3D[size]
         cubes[i] = new point3D();
      possiblePositionsBitmaps = null;
   }
   //------------------------------------------------------------------
   public void setCube(int whichCube, int ix, int iy, int iz)
   {
      cubes[whichCube].x = ix;
      cubes[whichCube].y = iy;
      cubes[whichCube].z = iz;
   }
   //------------------------------------------------------------------
   public piece3D applyIsometry(int isometryNumber)
   {
      piece3D p = new piece3D(pieceID, nCubes);

      for (int whichCube = 0; whichCube < p.nCubes; whichCube++)
      {
         int x = cubes[whichCube].x;
         int y = cubes[whichCube].y;
         int z = cubes[whichCube].z;

         switch (isometryNumber)
         {
         case 1:  p.cubes[whichCube].x = x;
            p.cubes[whichCube].y = y;
            p.cubes[whichCube].z = z;
            break;
         case 2:  p.cubes[whichCube].x = y;
            p.cubes[whichCube].y = x;
            p.cubes[whichCube].z = z;
            break;
         case 3:  p.cubes[whichCube].x = z;
            p.cubes[whichCube].y = x;
            p.cubes[whichCube].z = y;
            break;
         case 4:  p.cubes[whichCube].x = -y;
            p.cubes[whichCube].y = x;
            p.cubes[whichCube].z = z;
            break;
         case 5:  p.cubes[whichCube].x = -z;
            p.cubes[whichCube].y = y;
            p.cubes[whichCube].z = x;
            break;
         case 6:  p.cubes[whichCube].x = -x;
            p.cubes[whichCube].y = z;
            p.cubes[whichCube].z = y;
            break;
         case 7:  p.cubes[whichCube].x = -x;
            p.cubes[whichCube].y = -y;
            p.cubes[whichCube].z = z;
            break;
         case 8:  p.cubes[whichCube].x = -y;
            p.cubes[whichCube].y = -z;
            p.cubes[whichCube].z = x;
            break;
         case 9:  p.cubes[whichCube].x = -z;
            p.cubes[whichCube].y = -x;
            p.cubes[whichCube].z = y;
            break;
         case 10: p.cubes[whichCube].x = y;
            p.cubes[whichCube].y = -x;
            p.cubes[whichCube].z = z;
            break;
         case 11: p.cubes[whichCube].x = z;
            p.cubes[whichCube].y = -y;
            p.cubes[whichCube].z = x;
            break;
         case 12: p.cubes[whichCube].x = x;
            p.cubes[whichCube].y = -z;
            p.cubes[whichCube].z = y;
            break;
         case 13: p.cubes[whichCube].x = x;
            p.cubes[whichCube].y = z;
            p.cubes[whichCube].z = -y;
            break;
         case 14: p.cubes[whichCube].x = y;
            p.cubes[whichCube].y = x;
            p.cubes[whichCube].z = -z;
            break;
         case 15: p.cubes[whichCube].x = z;
            p.cubes[whichCube].y = y;
            p.cubes[whichCube].z = -x;
            break;
         case 16: p.cubes[whichCube].x = -z;
            p.cubes[whichCube].y = x;
            p.cubes[whichCube].z = -y;
            break;
         case 17: p.cubes[whichCube].x = -x;
            p.cubes[whichCube].y = y;
            p.cubes[whichCube].z = -z;
            break;
         case 18: p.cubes[whichCube].x = -y;
            p.cubes[whichCube].y = z;
            p.cubes[whichCube].z = -x;
            break;
         case 19: p.cubes[whichCube].x = -x;
            p.cubes[whichCube].y = -z;
            p.cubes[whichCube].z = -y;
            break;
         case 20: p.cubes[whichCube].x = -z;
            p.cubes[whichCube].y = -x;
            p.cubes[whichCube].z = -y;
            break;
         case 21: p.cubes[whichCube].x = -y;
            p.cubes[whichCube].y = -x;
            p.cubes[whichCube].z = -z;
            break;
         case 22: p.cubes[whichCube].x = z;
            p.cubes[whichCube].y = -x;
            p.cubes[whichCube].z = -y;
            break;
         case 23: p.cubes[whichCube].x = y;
            p.cubes[whichCube].y = -z;
            p.cubes[whichCube].z = -x;
            break;
         case 24: p.cubes[whichCube].x = x;
            p.cubes[whichCube].y = -y;
            p.cubes[whichCube].z = -z;
            break;
         }
      }
      return p;
   }
};