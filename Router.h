#ifndef ROUTER_H
#define ROUTER_H


template <typename K, typename C>
class Router
{
	private:
		// A CPU Object
		// A GPU Object

	public:
		// Public functions for router

		/**
		 * @brief Empty Router constructor
		 * @todo Write this functions
		 */
		Router();


		/**
		 * @brief classify the key and route it to cpu or gpu
		 * @param key The key and request into to be processed
		 * @return 
		 */
		route(K key, C client_info);

		/**
		 * @brief routing a list of key
		 * @param keys The keys to be processed
		 * @param client_info The client info
		 * @return 
		 */
		multiRoute(std::vector<K>* keys, std::vector<C>* client_infos);
}

#endif
