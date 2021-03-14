#ifndef GPU_BUFFER_H
#define GPU_BUFFER_H
#define MAX_BUFFER_SIZE 1000

template <typename K, typename C>
class GPU_Buffer
{
	private:
		// Private fields and functions for buffer
		std::vector<std::pair<K,C*>> buffer;
        std::mutex b_lock;

	public:
		// Public functions for buffer

		/**
		 * @brief Empty buffer constructor
		 * @todo Write this functions
		 */
		GPU_Buffer();


		/**
		 * @brief routing a key
		 * @param key The key to be processed
		 * @return Return the value of the key; if key is not existed, return null
		 */
        batch(K key, C *client_info) {
			// Put the key and info into buffer
			// If the buffer were full, send it to GPU
		};
		/**
		 * @brief send the buffer to GPU
		 */
		sendToGPU();
		
        /**
		 * @brief put a key into the buffer
		 * @param key The key to be put into buffer
		 * @return
		 */
		putToBuffer(K key, C *client_info);


}

#endif
