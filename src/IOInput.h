/*
	MIT License

	Copyright (c) 2020 x4kkk3r

	Permission is hereby granted, free of charge, to any person obtaining a copy
	of this software and associated documentation files (the "Software"), to deal
	in the Software without restriction, including without limitation the rights
	to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
	copies of the Software, and to permit persons to whom the Software is
	furnished to do so, subject to the following conditions:

	The above copyright notice and this permission notice shall be included in all
	copies or substantial portions of the Software.

	THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
	IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
	FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
	AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
	LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
	OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
	SOFTWARE.
*/

#ifndef _IO_INPUT_H
#define _IO_INPUT_H

#include "IOKeyboard.h"
#include "IOMouse.h"

#include <memory>

class IOInput
{
public:
	IOInput() = default;
	IOInput(IOInput const &other) = delete;
	~IOInput() = default;

	void SetKeyboardInput(std::shared_ptr<IOKeyboard> const &keyboardInput) noexcept;
	void SetMouseInput(std::shared_ptr<IOMouse> const &mouseInput) noexcept;

	bool HasMouse() const noexcept;
	bool HasKeyboard() const noexcept;

	std::shared_ptr<IOMouse> const& GetMouse() const noexcept;
	std::shared_ptr<IOKeyboard> const& GetKeyboard() const noexcept;
private:
	std::shared_ptr<IOMouse> mouse;
	std::shared_ptr<IOKeyboard> keyboard;
};

#endif