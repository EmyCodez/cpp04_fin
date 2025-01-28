/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Queue.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esimpson <esimpson@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/28 14:48:55 by esimpson          #+#    #+#             */
/*   Updated: 2025/01/28 14:49:01 by esimpson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef QUEUE_HPP
#define QUEUE_HPP

#include <iostream>

class Node
{
public:
	void	*val;
	Node	*next;
	Node();
	Node(void *val);
	~Node();
};


class Queue
{
private:
	Node	*front;
	Node	*rear;
public:
	Queue();
	~Queue();
	void	enqueue(void *val);
	void	*dequeue(void);
	void	*queueFront();
	int		isEmpty();

};


#endif // !QUEUE_HPP