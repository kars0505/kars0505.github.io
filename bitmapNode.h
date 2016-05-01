//
//  bitmapNode.cpp
//  cs560project
//
//  Created by Anna Lei on 4/30/16.
//  Copyright (c) 2016 CS560. All rights reserved.
// 

public class bitmapNode
{
   int         bitmap;
   bitmapNode  link;

   public bitmapNode()
   {
      bitmap = 0;
      link = null;
   }

   public bitmapNode(int map)
   {
      bitmap = map;
      link = null;
   }
};