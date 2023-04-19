#ifndef ABS_H
#define ABS_H

#define ABS(x)
({
int _x = (x);

if (_x < 0)
{
	_x = -_x;
}
_x;
})
#endif /* ABS */
