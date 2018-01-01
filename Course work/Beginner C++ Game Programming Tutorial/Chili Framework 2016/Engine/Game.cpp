/****************************************************************************************** 
 *	Chili DirectX Framework Version 16.07.20											  *	
 *	Game.cpp																			  *
 *	Copyright 2016 PlanetChili.net <http://www.planetchili.net>							  *
 *																						  *
 *	This file is part of The Chili DirectX Framework.									  *
 *																						  *
 *	The Chili DirectX Framework is free software: you can redistribute it and/or modify	  *
 *	it under the terms of the GNU General Public License as published by				  *
 *	the Free Software Foundation, either version 3 of the License, or					  *
 *	(at your option) any later version.													  *
 *																						  *
 *	The Chili DirectX Framework is distributed in the hope that it will be useful,		  *
 *	but WITHOUT ANY WARRANTY; without even the implied warranty of						  *
 *	MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the						  *
 *	GNU General Public License for more details.										  *
 *																						  *
 *	You should have received a copy of the GNU General Public License					  *
 *	along with The Chili DirectX Framework.  If not, see <http://www.gnu.org/licenses/>.  *
 ******************************************************************************************/
#include "MainWindow.h"
#include "Game.h"

Game::Game( MainWindow& wnd )
	:
	wnd( wnd ),
	gfx( wnd )
{
}

void Game::Go()
{
	gfx.BeginFrame();	
	UpdateModel();
	ComposeFrame();
	gfx.EndFrame();
}

void Game::UpdateModel()
{
	// Handle movement
	if (wnd.kbd.KeyIsPressed(VK_UP)) {
		y -= 3;
	}
	if (wnd.kbd.KeyIsPressed(VK_DOWN)) {
		y += 3;
	}
	if (wnd.kbd.KeyIsPressed(VK_LEFT)) {
		x -= 3;
	}
	if (wnd.kbd.KeyIsPressed(VK_RIGHT)) {
		x += 3;
	}
}

void Game::ComposeFrame()
{
	if (wnd.kbd.KeyIsPressed(VK_SHIFT)) {
		if (wnd.kbd.KeyIsPressed(VK_CONTROL)) {
			gfx.PutPixel(x - 5, y, 255, 0, 0);
			gfx.PutPixel(x - 6, y, 255, 0, 0);
			gfx.PutPixel(x - 7, y, 255, 0, 0);
			gfx.PutPixel(x + 5, y, 255, 0, 0);
			gfx.PutPixel(x + 6, y, 255, 0, 0);
			gfx.PutPixel(x + 7, y, 255, 0, 0);
			gfx.PutPixel(x, y - 5, 255, 0, 0);
			gfx.PutPixel(x, y - 6, 255, 0, 0);
			gfx.PutPixel(x, y - 7, 255, 0, 0);
			gfx.PutPixel(x, y + 5, 255, 0, 0);
			gfx.PutPixel(x, y + 6, 255, 0, 0);
			gfx.PutPixel(x, y + 7, 255, 0, 0);
		}
		else {
			gfx.PutPixel(x - 5, y, 255, 255, 255);
			gfx.PutPixel(x - 6, y, 255, 255, 255);
			gfx.PutPixel(x - 7, y, 255, 255, 255);
			gfx.PutPixel(x + 5, y, 255, 255, 255);
			gfx.PutPixel(x + 6, y, 255, 255, 255);
			gfx.PutPixel(x + 7, y, 255, 255, 255);
			gfx.PutPixel(x, y - 5, 255, 255, 255);
			gfx.PutPixel(x, y - 6, 255, 255, 255);
			gfx.PutPixel(x, y - 7, 255, 255, 255);
			gfx.PutPixel(x, y + 5, 255, 255, 255);
			gfx.PutPixel(x, y + 6, 255, 255, 255);
			gfx.PutPixel(x, y + 7, 255, 255, 255);
		}
	}
	else if (wnd.kbd.KeyIsPressed(VK_CONTROL)) {
		gfx.PutPixel(x - 3, y, 255, 0, 0);
		gfx.PutPixel(x - 4, y, 255, 0, 0);
		gfx.PutPixel(x - 5, y, 255, 0, 0);
		gfx.PutPixel(x + 3, y, 255, 0, 0);
		gfx.PutPixel(x + 4, y, 255, 0, 0);
		gfx.PutPixel(x + 5, y, 255, 0, 0);
		gfx.PutPixel(x, y - 3, 255, 0, 0);
		gfx.PutPixel(x, y - 4, 255, 0, 0);
		gfx.PutPixel(x, y - 5, 255, 0, 0);
		gfx.PutPixel(x, y + 3, 255, 0, 0);
		gfx.PutPixel(x, y + 4, 255, 0, 0);
		gfx.PutPixel(x, y + 5, 255, 0, 0);
	}
	else {
		gfx.PutPixel(x - 3, y, 255, 255, 255);
		gfx.PutPixel(x - 4, y, 255, 255, 255);
		gfx.PutPixel(x - 5, y, 255, 255, 255);
		gfx.PutPixel(x + 3, y, 255, 255, 255);
		gfx.PutPixel(x + 4, y, 255, 255, 255);
		gfx.PutPixel(x + 5, y, 255, 255, 255);
		gfx.PutPixel(x, y - 3, 255, 255, 255);
		gfx.PutPixel(x, y - 4, 255, 255, 255);
		gfx.PutPixel(x, y - 5, 255, 255, 255);
		gfx.PutPixel(x, y + 3, 255, 255, 255);
		gfx.PutPixel(x, y + 4, 255, 255, 255);
		gfx.PutPixel(x, y + 5, 255, 255, 255);
	}
}