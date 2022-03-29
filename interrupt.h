#ifndef TTDRIVER_INTERRUPT_H_INCLUDED
#define TTDRIVER_INTERRUPT_H_INCLUDED

struct tenstorrent_device;

bool tenstorrent_enable_interrupts(struct tenstorrent_device *tt_dev);
void tenstorrent_disable_interrupts(struct tenstorrent_device *tt_dev);

#endif
